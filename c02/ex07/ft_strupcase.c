/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:28:03 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 19:42:24 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int pos_str;

	pos_str = 0;
	while (str[pos_str] != '\0')
	{
		if (str[pos_str] >= 'a' && str[pos_str] <= 'z')
			str[pos_str] = str[pos_str] + ('A' - 'a');
		++pos_str;
	}
	return (str);
}
