/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:17:11 by hemin             #+#    #+#             */
/*   Updated: 2020/07/21 20:17:03 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (nb != 0)
	{
		while (dest[i] != '\0')
			i++;
		while (j < nb)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	return (dest);
}
