/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:00:54 by hemin             #+#    #+#             */
/*   Updated: 2020/07/07 15:03:54 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_combn(int n)
{
	int i;
	int k;
	n = n - 1;
	k = n;

	int digit[9];
	if (n > 10 || n < 0 )
	{
		return ;
	}

	digit[0] = -1 + '0';
	while (k >= 0)
	{
		digit[n] = digit[n - 1];
		while (i >= 0)
		{
			ft_putchar(digit[i]);
			i--;
		}
		if (digit[n] != 9 - n + 48)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		k--;
	}
}

int main()
{
	ft_print_combn(3);
}
