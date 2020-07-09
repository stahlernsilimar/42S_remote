/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:17:38 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 19:42:05 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int pos_str;

	pos_str = 0;
	while (str[pos_str] != '\0')
	{
		if (str[pos_str] < '0' | str[pos_str] > '9')
			return (0);
		++pos_str;
	}
	return (1);
}
