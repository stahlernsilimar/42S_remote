/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:22:01 by hemin             #+#    #+#             */
/*   Updated: 2020/07/22 20:01:08 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, char *base, int digit)
{
	int ft_left;

	ft_left = 0;
	if (nb == -2147483648)
	{
		ft_left = (nb % digit) * (-1);
		ft_putnbr(nb / digit, base, digit);
		write(1, &base[ft_left], 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1), base, digit);
	}
	else if ((nb / digit) != 0)
	{
		ft_left = nb % digit;
		ft_putnbr(nb / digit, base, digit);
		write(1, &base[ft_left], 1);
	}
	else
	{
		ft_left = nb % digit;
		write(1, &base[ft_left], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+') || (base[i] == '-') ||
		((base[i] > 8) && (base[i] < 14)))
			return ;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		i++;
	}
	if (i < 2)
		return ;
	ft_putnbr(nbr, base, i);
}
