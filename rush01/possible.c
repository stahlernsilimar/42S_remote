/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 22:32:08 by youncho           #+#    #+#             */
/*   Updated: 2020/07/15 10:14:01 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_variable.h"
#include <unistd.h>
#include <stdlib.h>

int		check_table(void)
{
	int x;
	int y;
	int temp;
	int count;

	x = 1;
	while (x <= g_num)
	{
		count = 0;
		temp = 0;
		y = g_num;
		while (y >= 1)
		{
			if (g_arr[y][x] > temp)
			{
				temp = g_arr[y][x];
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

int		is_possible_left(int x, int y)
{
	int i;
	int temp;
	int count;

	temp = 0;
	count = 1;
	i = 1;
	while (i < x)
	{
		if (g_arr[y][i] > temp)
		{
			count++;
			temp = g_arr[y][i];
		}
		i++;
	}
	if (g_left[y] == count)
		return (1);
	return (0);
}

int		is_possible_right(int y)
{
	int i;
	int temp;
	int count;

	temp = 0;
	count = 0;
	i = g_num;
	while (i >= 1)
	{
		if (g_arr[y][i] > temp)
		{
			count++;
			temp = g_arr[y][i];
		}
		i--;
	}
	if (g_right[y] == count)
		return (1);
	return (0);
}

int		is_possible_up(int x, int y)
{
	int i;
	int temp;
	int count;

	i = 1;
	temp = 0;
	count = 1;
	while (i < y)
	{
		if (g_arr[i][x] > temp)
		{
			temp = g_arr[i][x];
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
		return (is_possible_up(x, y) &&
				is_possible_left(x, y));
	}
	return (1);
}
