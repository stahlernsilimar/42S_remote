/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 02:30:45 by hemin             #+#    #+#             */
/*   Updated: 2020/07/21 02:30:45 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int	ft_putnbr(int nb, char *base, int digit, int total)
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
*/

char ft_putstr_base(char *str, char *base)
{
	int j;

	j = 0;
	if (str == base[j])
		return (base);
	j++;
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
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] =='-'))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
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
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+') || (base[i] == '-') ||
		((base[i] > 8) && (base[i] < 14)) || (base[i] == ' '))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0) ;
	total = 0;
	neg = 0;
	j = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_putstr_base(str, base);
		i++;
	}
	nbr = ft_atoi(str);
	if (neg == 1)
		return (nbr * (-1));
	else
		return (nbr);
}

int main()
{
	printf("%d ", ft_atoi_base("42", "0123456789"));
	printf("%d ", ft_atoi_base("   42abc", "0123456789"));
	printf("%d ", ft_atoi_base("  +--++-rcrdmddd+-abc", "mrdoc"));
	printf("%d ", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("%d ", ft_atoi_base("8888888888888888888888888888888", "a8"));
	printf("%d ", ft_atoi_base("one", "e"));
	printf("%d ", ft_atoi_base("blank", ""));
	printf("%d ", ft_atoi_base("", "za"));
	printf("%d ", ft_atoi_base("ca", "zaca"));
	printf("%d ", ft_atoi_base("ca", "z\v\f\nac"));
	printf("\n");
}
