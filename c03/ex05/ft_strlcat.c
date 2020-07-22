/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:17:58 by hemin             #+#    #+#             */
/*   Updated: 2020/07/22 18:29:01 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	ret_size;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	ret_size = i + j;
	k = 0;
	while ((src[k] != '\0') && (i + 1 < size))
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	if (i > size)
		return (size + j);
	else
		return (ret_size);
}
