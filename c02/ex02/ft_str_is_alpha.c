/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:46:58 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 20:06:00 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] > 'Z' && str[pos] < 'a')
			return (0);
		else if (str[pos] > 'z' | str[pos] < 'A')
			return (0);
		++pos;
	}
	return (1);
}
