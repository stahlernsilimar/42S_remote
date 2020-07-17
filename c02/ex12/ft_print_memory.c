/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:31:30 by hemin             #+#    #+#             */
/*   Updated: 2020/07/17 10:03:29 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	int num;
	int i;
	int j;
	char *base;
	int c1;
	int c2;
	int loop;
	unsigned int k;
	int address;

	num = 0;
	loop = 0;
	k = 0;
	base = "0123456789abcdef";

	if (size == 0)
		return (0);
	else
	{
		while (k <= size)
		{
			i = 0;
			j = 0;
			while (i < 16)
			{
				if ((i == 0) || (i % 16 == 0))
				{
					address = ((int *)addr)[i];
					write(1, &address, 16);
					write(1, ":", 1);
					write(1, " ", 1);
				}
				c1 = ((unsigned char *)addr)[i + (loop*16)] * 8 / 16;
				c2 = ((unsigned char *)addr)[i + (loop*16)] * 8 % 16;
				write(1,&base[c1],1);
				write(1,&base[c2],1);
				if (i % 2 == 0)
					write(1," ",1);
				i++;
			}
			while (j < 16)
			{
				if ((((unsigned char *)(addr))[j] >= ' ') && (((unsigned char *)(addr))[j] <= '~'))
					write(1,&addr[j + loop*16],1);
				else
					write(1,".",1);
				j++;
				k++;
			}
			write(1,"\n",1);
			loop++;
		}
	}
	return (addr);
}

int	main()
{
	ft_print_memory("asdfasdfqwertytyzxcvzxcv\0\0\xff\x7f\x01", 29);
}
