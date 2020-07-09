/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:35:14 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 19:42:18 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int pos_str;

	pos_str = 0;
	while (str[pos_str] != '\0')
	{
		if (str[pos_str] < ' ' | str[pos_str] > '~')
			return (0);
		++pos_str;
	}
	return (1);
}
