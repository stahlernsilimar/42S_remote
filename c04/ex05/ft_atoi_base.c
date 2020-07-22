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

char	*ft_str2base(char *str, char *base, int i)
{
	int j;

	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				str[i] = j + '0';
			j++;
		}
		i++;
	}
	printf ("base changed : %s", str);
	return (str);
}

int	ft_atoi(char *str, char *base)
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
	str = ft_str2base(str, base, i);
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
	nbr = ft_atoi(str, base);
	return (nbr);
}
