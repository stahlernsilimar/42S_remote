/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:17:58 by hemin             #+#    #+#             */
/*   Updated: 2020/07/21 20:19:21 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				k;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size <= 0)
		return (j);
	while ((i < size) && (dest[i] != '\0'))
		i++;
	if (i >= size)
		return (i + j);
	k = 0;
	while (i + k < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	if ((size != 0) || (i < size))
		dest[k] = '\0';
	return (i + j);
}
