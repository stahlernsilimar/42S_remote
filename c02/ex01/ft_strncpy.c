/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:22:13 by hemin             #+#    #+#             */
/*   Updated: 2020/07/19 22:31:06 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos_src;

	pos_src = 0;
	while ((pos_src < n) && (src[pos_src] != '\0'))
	{
		dest[pos_src] = src[pos_src];
		++pos_src;
	}
	while (pos_src < n)
		dest[pos_src++] = '\0';
	return (dest);
}
