/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:05:47 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 15:46:22 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int pos_src;

	pos_src = 0;
	while (src[pos_src] != '\0')
	{
		dest[pos_src] = src[pos_src];
		++pos_src;
	}
	dest[pos_src] = '\0';
	return (dest);
}
