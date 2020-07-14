/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:53:23 by hemin             #+#    #+#             */
/*   Updated: 2020/07/14 13:49:57 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
