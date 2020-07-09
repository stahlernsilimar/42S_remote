/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:26:17 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 19:42:10 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int pos_str;

	pos_str = 0;
	while (str[pos_str] != '\0')
	{
		if (str[pos_str] < 'a' | str[pos_str] > 'z')
			return (0);
		++pos_str;
	}
	return (1);
}
