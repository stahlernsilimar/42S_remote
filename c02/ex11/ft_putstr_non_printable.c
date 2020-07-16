/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:08:31 by hemin             #+#    #+#             */
/*   Updated: 2020/07/16 12:45:13 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		pos_str;
	char	*base;
	int		c1;
	int		c2;

	base = "0123456789abcdef";
	pos_str = 0;
	while (str[pos_str] != '\0')
	{
		if ((str[pos_str] >= ' ') && (str[pos_str] <= '~'))
			write(1, &str[pos_str], 1);
		else
		{
			c1 = (unsigned char)str[pos_str] / 16;
			c2 = (unsigned char)str[pos_str] % 16;
			write(1, "\\", 1);
			write(1, &base[c1], 1);
			write(1, &base[c2], 1);
		}
		pos_str++;
	}
}
