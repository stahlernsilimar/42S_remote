/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:24:34 by hemin             #+#    #+#             */
/*   Updated: 2020/07/15 20:24:34 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	pos_str;
	char digit[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	int c1;
	int c2;
	int i;

	pos_str = 0;
	i = 0;

}

void	digit_slice()
{
	while (pos_str < 16)
	write(1, &addr[pos_str], 16);
		write(1, ': ', 2);

		c1 = addr[pos_str] / 16;
		c2 = addr[pos_str] % 16;

		write(1, &digit[c1] , 1);
		write(1, &digit[c2] , 1);

		pos_str++;
}
