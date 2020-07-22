/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 21:42:30 by hemin             #+#    #+#             */
/*   Updated: 2020/07/22 21:44:43 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;

	temp = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}
