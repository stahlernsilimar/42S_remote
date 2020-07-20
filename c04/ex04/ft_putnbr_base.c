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

void	ft_putnbr_base(int nb, char *base)
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
	}
	else
		ft_putchar(base[ft_left]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;
	int neg;
	int count;
	int nbr_left;

	base_size = 0;
	neg = 0;
	count = 0;
	nbr_left;
	while (base[base_size] != '\0')
	{
		if ((base[base_size] == '+') || (base[base_size] == '-') ||
		((base[base_size] > 8) && (base[base_size] < 14)) || (base[base_size] == ' '))
			return (0); // 동일한 문자 두번??
		base_size++;
	}
	if (base_size < 2)
		return (0);
	while (nbr < 0)
		neg = -1;
	ft_putnbr_base (nbr, base);
}
