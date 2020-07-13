/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:00:54 by hemin             #+#    #+#             */
/*   Updated: 2020/07/13 21:43:41 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print(int value[10], int n)
{
	int i;

	i = 1;
	while (i <= n)
		{
			ft_putchar(value[i] + '0');
			++i;
		}
	ft_putchar(',');
	ft_putchar(' ');
}
void ft_recursion (int value[10], int depth, int n, int init)
{
	while (init < n)
	{
		value[depth] = value[depth-1] + 1;
		printf("%d \n", value[depth]);
		depth--;
	}
	while (value[n] <= 9)
	{
		ft_print(value, n);
		value[n]++;
	}
	if (value[1] >= 10 - n)
	{
		return ;
	}

	value[n-1]++;
	ft_recursion(value, depth, n, init--);
}

void ft_print_combn (int n)
{
	int depth;
	int value[10];
	int i;
	int init;

	value[1] = 0;
	depth = n;
	i = 1;
	init = n;

	if (n > 9 || n < 1)
		return;

	while (i <= n-1)
		{
			value[i+1] = value[i] + 1;
			i++;
		}
	ft_recursion(value, depth, n, init);
}
