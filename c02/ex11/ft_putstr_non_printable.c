/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:36:32 by hemin             #+#    #+#             */
/*   Updated: 2020/07/15 17:36:32 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	pos_str;
	char digit[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	char c;
	int c1;
	int c2;

	pos_str = 0;
	c = '\\';
	while(str[pos_str] != '\0')
	{
		if ((str[pos_str] >= ' ') && (str[pos_str] <= '~'))
		{
			write(1, &str[pos_str], 1);
			pos_str++;
		}
		else
		{
			c1 = str[pos_str] / 16;
			c2 =str[pos_str] % 16;

			write(1, &c, 1);
			write(1, &digit[c1] , 1);
			write(1, &digit[c2] , 1);
			pos_str++;
		}
	}
}
