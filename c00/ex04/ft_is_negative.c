/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:53:23 by hemin             #+#    #+#             */
/*   Updated: 2020/07/06 14:48:53 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	char neg;
	char pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		ft_putchar(neg);
	}
	else if (n >= 0)
	{
		ft_putchar(pos);
	}
}
