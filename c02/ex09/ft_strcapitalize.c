/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:26:35 by hemin             #+#    #+#             */
/*   Updated: 2020/07/09 20:59:52 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void check_lower(char str_temp, int *i)
{
	if (str_temp[i+1] > 'a' && str_temp[i+1] < 'z')
		{
			str_temp[i+1] = str_temp[i+1] - ('A' - 'a');
		}
}

char	*ft_strcapitalize(char *str)
{
	int pos_str;
	int i;
	char str_temp;

	str_temp[] = str[];

	pos_str = 0;
	i = 0;
	while (str[pos_str] != '\0')
	{
		str_temp[pos_str + 1] = str[pos_str];
		++pos_str;
	}

	while (i <= pos_str)
	{
		if (str_temp[i] < 'A' || str_temp[i] > 'Z')
			check_lower;
		else if (str_temp[i] < 'a' || str_temp[i] > 'z')
			check_lower;
		++i;
	}
	return (str);
}
