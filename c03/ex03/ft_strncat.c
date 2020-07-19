/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:17:11 by hemin             #+#    #+#             */
/*   Updated: 2020/07/20 01:37:13 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int num_dest;
	unsigned int num_src;

	num_dest = 0;
	num_src = 0;
	if (nb != 0)
	{
		while (dest[num_dest] != '\0')
			num_dest++;
		while (num_src <= nb)
		{
			dest[num_dest] = src[num_src];
			num_dest++;
			num_src++;
		}
	}
	return (dest);
}
