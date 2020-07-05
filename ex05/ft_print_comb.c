/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 17:12:05 by hemin             #+#    #+#             */
/*   Updated: 2020/07/05 20:59:05 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int						ft_putchar(char c)
{
						write(1, &c, 1);
	return (0);
}

void					t_print_comb(void)
{
	int a;
	int b;
	int c;
	int comma;

	a = 0 + '0';
	b = 1 + '0';
	c = 2 + '0';

	while (a < '10')
	{
		while (b < '10')
		{
			if (b != a)
			{
				while (c < '10')
				{
					if (c != a | b)
					{
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(c);
						ft_putchar(',');
						ft_putchar(' ');
						c = c + 1;
					}
				}
				b = b + 1;
			}
		}
		a = a + 1;
	}
}
