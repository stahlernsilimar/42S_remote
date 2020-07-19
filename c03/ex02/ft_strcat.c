/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:26:29 by hemin             #+#    #+#             */
/*   Updated: 2020/07/20 01:34:51 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int num_dest;
	int num_src;

	num_dest = 0;
	num_src = 0;
	while (dest[num_dest] != '\0')
		num_dest++;
	while (src[num_src] != '\0')
	{
		dest[num_dest] = src[num_src];
		num_dest++;
		num_src++;
	}
	return (dest);
}
