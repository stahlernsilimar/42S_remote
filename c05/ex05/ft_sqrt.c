/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 21:49:24 by hemin             #+#    #+#             */
/*   Updated: 2020/07/24 02:56:35 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int			temp;
	long long	i;

	temp = 0;
	i = 0;
	while (i <= nb / 2 && i <= 46554)
	{
		i++;
		temp = i * i;
		if (nb == temp)
			return (i);
	}
	return (0);
}
