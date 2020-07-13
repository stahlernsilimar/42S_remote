/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:26:35 by hemin             #+#    #+#             */
/*   Updated: 2020/07/13 22:07:53 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void check_lower(char str, int *i)
{
	if (str[i+1] > 'a' && str[i+1] < 'z')
		{
			str[i+1] = str[i+1] - ('A' - 'a');
		}
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int str_temp[99];

	i = 0;
	while (str[i] != '\0')
	{
		str_temp[i] = str[i];
		i++;
	}

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z' ||
			str[i] < 'a' || str[i] > 'z')
			check_lower;
		++i;
	}
	return (str);
}

int main(void)
{
	char str[99] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
}
