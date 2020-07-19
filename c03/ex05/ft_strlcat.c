/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:17:58 by hemin             #+#    #+#             */
/*   Updated: 2020/07/20 01:36:41 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	num_dest;
	unsigned int	num_src;
	int				i;

	num_dest = 0;
	num_src = 0;
	while (src[num_src] != '\0')
		num_src++;
	if (size <= 0)
		return (num_src);
	while ((num_dest < size) && (dest[num_dest] != '\0'))
		num_dest++;
	if (num_dest >= size)
		return (num_dest + num_src);
	i = 0;
	while (num_dest + i < size)
	{
		dest[num_dest + i] = src[i];
		i++;
	}
	if ((size != 0) || (num_dest < size))
		dest[i] = '\0';
	return (num_dest + num_src);
}
