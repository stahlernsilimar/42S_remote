/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:51:25 by hemin             #+#    #+#             */
/*   Updated: 2020/07/16 18:18:16 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*temp[99];

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (to_find[j] != '\0')
		j++;
	if (j == '\0')
		return (str);
	if (!(i < j))
	{
		i = 0;
		j = 0;
		while (str[i] != '\0')
		{
			if (str[i] == to_find[0])
				temp[j++] = &str[i];
			i++;
		}
		return (*temp);
	}
	return (0);
}
