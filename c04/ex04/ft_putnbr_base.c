/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:41:43 by hemin             #+#    #+#             */
/*   Updated: 2020/07/20 15:41:43 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, char *base)
{
	int ft_left = 0;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648, base);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1), base);
	}
	else if (nb >= 10)
	{
		ft_left = nb % 10;
		ft_putnbr(nb / 10, base);
		ft_putchar(base[ft_left]);
		printf("%d", ft_left);
	}
	else
		ft_putchar(base[ft_left]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;
	int base_size_test;
	int neg;
	int count;

	base_size = 0;
	neg = 0;
	count = 0;
	while (base[base_size] != '\0')
	{
		if ((base[base_size] == '+') || (base[base_size] == '-') ||
		((base[base_size] > 8) && (base[base_size] < 14)) || (base[base_size] == ' '))
			return ;
		base_size++;
		base_size_test = base_size;
			while (base[base_size_test] != '\0')
			{
				if(base[base_size] == base[base_size_test])
					return ;
			}
	}
	if (base_size < 2)
		return ;
	ft_putnbr(nbr, base);
}
