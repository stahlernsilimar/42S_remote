/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:12:06 by hemin             #+#    #+#             */
/*   Updated: 2020/07/07 21:14:54 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int std;
	int i;
	int temp;

	std = size / 2;
	i = 1;
	while (i <= std)
	{
		if (size % 2 == 1)
		{
			temp = tab[std + i];
			tab[std + i] = tab[std - i];
			tab[std - i] = temp;
			i++;
		}
		else
		{
			temp = tab[std - i];
			tab[std - i] = tab[std + i - 1];
			tab[std + i - 1] = temp;
			i++;
		}
	}
}
