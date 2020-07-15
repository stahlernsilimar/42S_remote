/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 22:32:27 by youncho           #+#    #+#             */
/*   Updated: 2020/07/15 09:01:42 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_variable.h"
#include <unistd.h>
#include <stdlib.h>

int *g_view;

void	print_table(void);
int		check_table(void);
int		is_possible_left(int x, int y);
int		is_possible_right(int y);
int		is_possible_up(int x, int y);
int		is_possible(int x, int y, int n);
void	solve(int x, int y);
void	dfs(int x, int y);

void	print_table(void)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i <= g_num)
	{
		j = 1;
		while (j <= g_num)
		{
			c = g_arr[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	g_is_exit = 1;
}

void	dfs(int x, int y)
{
	int i;

	i = 1;
	while (i <= g_num)
	{
		if (is_possible(x, y, i))
		{
			g_arr[y][x] = i;
			solve(x + 1, y);
		}
		i++;
	}
}

void	solve(int x, int y)
{
	if (!g_is_exit)
	{
		if (y == g_num + 1)
		{
			if (check_table())
				print_table();
			return ;
		}
		if (x == g_num + 1)
			if (is_possible_right(y))
				solve(1, y + 1);
			else
				return ;
		else
			dfs(x, y);
	}
}

int		init_setting(int i, int j, int k, char **argv)
{
	while (*(argv[1] + j))
	{
		if ('0' <= *(argv[1] + j) && *(argv[1] + j) <= '9')
			i++;
		j++;
	}
	if (i % 4 != 0 || i == 0)
		return (0);
	g_num = i / 4;
	g_view = (int*)malloc((i + 1) * sizeof(int));
	j = 0;
	while (*(argv[1] + j))
	{
		if ('1' <= *(argv[1] + j) && *(argv[1] + j) <= g_num + '0')
			g_view[k++] = *(argv[1] + j);
		j++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		j;

	if (argc != 2)
		write(1, "Error\n", 6);
	else if (init_setting(0, 0, 0, argv))
	{
		j = 0;
		while (j < g_num)
		{
			g_up[j + 1] = *(g_view + j) - '0';
			g_down[j + 1] = *(g_view + j + g_num * 1) - '0';
			g_left[j + 1] = *(g_view + j + g_num * 2) - '0';
			g_right[j + 1] = *(g_view + j + g_num * 3) - '0';
			j++;
		}
		free(g_view);
		solve(1, 1);
		if (!g_is_exit)
			write(1, "Error : There is no number of cases!\n", 37);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
