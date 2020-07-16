/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:26:35 by hemin             #+#    #+#             */
/*   Updated: 2020/07/16 14:57:06 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int str_pos;

	str_pos = 1;
	if ((str[0] > 'a' && str[0] < 'z'))
		str[0] = str[0] + ('A' - 'a');
	while (str[str_pos] != '\0')
	{
		if ((str[str_pos - 1] < 'a' || str[str_pos - 1] > 'z') &&
			(str[str_pos - 1] < 'A' || str[str_pos - 1] > 'Z') &&
			(str[str_pos - 1] < '1' || str[str_pos - 1] > '9'))
		{
			if (str[str_pos] > 'a' && str[str_pos] < 'z')
				str[str_pos] = str[str_pos] + ('A' - 'a');
		}
		str_pos++;
	}
	return (str);
}
