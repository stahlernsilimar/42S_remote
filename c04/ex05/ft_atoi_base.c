/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:29:21 by hemin             #+#    #+#             */
/*   Updated: 2020/07/23 11:35:29 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+') || (base[i] == '-') ||
		((base[i] > 8) && (base[i] < 14)) || (base[i] == ' '))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
}

int	ft_putnbr(int nb, char *base, int digit, int total)
{
	int ft_left;

	ft_left = 0;
	if (nb == -2147483648)
	{
		ft_left = (nb % digit) * (-1);
		total = ft_putnbr(nb / digit, base, digit, total);
		total = total * 10 + (base[ft_left] - '0');
	}
	else if (nb < 0)
	{
		total = ft_putnbr(nb * (-1), base, digit, total);
	}
	else if ((nb / digit) != 0)
	{
		ft_left = nb % digit;
		total = ft_putnbr(nb / digit, base, digit, total);
		total = total * 10 + (base[ft_left] - '0');
	}
	else
	{
		ft_left = nb % digit;
		total = total * 10 + (base[ft_left] - '0');
	}
	return (total);
}

int	ft_atoi(char *str)
{
	int count;
	int i;
	int ret;

	count = 0;
	i = 0;
	ret = 0;
	while (str[i] != '\0' && (((str[i] > 8) && (str[i] < 14)) || str[i] == ' '))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	if (count % 2 == 1)
		ret = ret * (-1);
	return (ret);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int nbr;
	int total;
	int neg;

	if (str[0] == '\0')
		return (0);
	if (!ft_checkbase)
		return (0);
	total = 0;
	neg = 0;
	nbr = ft_atoi(str);
	if (nbr < 0)
		neg = 1;
	nbr = ft_putnbr(nbr, base, i, total);
	if (neg == 1)
		return (nbr * (-1));
	else
		return (nbr);
}
