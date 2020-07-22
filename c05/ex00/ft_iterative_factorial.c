/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 21:40:08 by hemin             #+#    #+#             */
/*   Updated: 2020/07/22 21:44:33 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int temp;

	temp = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		temp = temp * nb;
		nb--;
	}
	return (temp);
}
