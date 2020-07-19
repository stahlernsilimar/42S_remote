/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:22:55 by hemin             #+#    #+#             */
/*   Updated: 2020/07/19 22:31:50 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int pos_src;
	unsigned int pos_dest;
	unsigned int i;

	pos_src = 0;
	pos_dest = 0;
	i = 0;
	while (src[pos_src] != '\0')
		pos_src++;
	if (size == 0)
		return (pos_src);
	else
	{
		while ((size != 0) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		if (pos_src < size)
			dest[pos_src] = '\0';
		else
			dest[size - 1] = '\0';
	}
	return (pos_src);
}
