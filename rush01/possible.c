/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 22:32:08 by youncho           #+#    #+#             */
/*   Updated: 2020/07/12 11:20:40 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_variable.h"
#include <unistd.h>
#include <stdlib.h>

int		check_table(void)
{
	int x;
	int y;
	int last_num;
	int count;

	x = 1;
	while (x <= g_num)
	{
		count = 0;
		last_num = 0;
		y = g_num;
		while (y >= 1)
		{
			if (g_arr[y][x] > last_num)
			{
				last_num = g_arr[y][x];
				count++;
			}
			y--;
		}
		if (g_down[x] != count)
			return (0);
		x++;
	}
	return (1);
}

int		is_possible_horizontal_left(int x, int y)
{
	int i;
	int first_num;
	int count;

	first_num = 0;
	count = 1;
	i = 1;
	while (i < x)
	{
		if (g_arr[y][i] > first_num)
		{
			count++;
			first_num = g_arr[y][i];
		}
		i++;
	}
	if (g_left[y] == count)
		return (1);
	return (0);
}

int		is_possible_horizontal_right(int y)
{
	int i;
	int last_num;
	int count;

	last_num = 0;
	count = 0;
	i = g_num;
	while (i >= 1)
	{
		if (g_arr[y][i] > last_num)
		{
			count++;
			last_num = g_arr[y][i];
		}
		i--;
	}
	if (g_right[y] == count)
		return (1);
	return (0);
}

int		is_possible_vertical_up(int x, int y)
{
	int i;
	int first_num;
	int count;

	i = 1;
	first_num = 0;
	count = 1;
	while (i < y)
	{
		if (g_arr[i][x] > first_num)
		{
			first_num = g_arr[i][x];
			count++;
		}
		i++;
	}
	if (g_up[x] == count)
		return (1);
	return (0);
}

int		is_possible(int x, int y, int n)
{
	int i;

	i = 1;
	while (i < x)
	{
		if (g_arr[y][i] == n)
			return (0);
		i++;
	}
	i = 1;
	while (i < y)
	{
		if (g_arr[i][x] == n)
			return (0);
		i++;
	}
	if (n == g_num)
	{
		return (is_possible_vertical_up(x, y) &&
				is_possible_horizontal_left(x, y));
	}
	return (1);
}
