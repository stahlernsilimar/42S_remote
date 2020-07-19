/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 02:32:41 by hemin             #+#    #+#             */
/*   Updated: 2020/07/20 01:36:59 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int num;

	num = 0;
	if (n != 0)
	{
		while (num < n)
		{
			if (s1[num] < s2[num])
				return (-1);
			else if (s1[num] > s2[num])
				return (1);
			num++;
		}
	}
	return (0);
}
