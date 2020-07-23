/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:53:20 by hemin             #+#    #+#             */
/*   Updated: 2020/07/23 13:24:53 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int num_str;

	num_str = 0;
	while (str[num_str] != '\0')
		num_str++;
	return (num_str);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;
	int		i;

	i = 0;
	len = ft_strlen(src);
	temp = (char *)malloc(len*sizeof(char));
	while (src[i] != '\0')
	{
		temp[i] = src[i];
		i++;
	}
	return (temp);
}
