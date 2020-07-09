/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:19:46 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 20:22:30 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int pos_str;

	pos_str = 0;
	while (str[pos_str] != '\0')
	{
		if (str[pos_str] >= 'A' && str[pos_str] <= 'Z')
			str[pos_str] = str[pos_str] - ('A' - 'a');
		++pos_str;
	}
	return (str);
}
