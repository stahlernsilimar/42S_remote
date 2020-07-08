/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:31:42 by hemin             #+#    #+#             */
/*   Updated: 2020/07/08 16:31:47 by hemin            ###   ########.fr       */
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
			i = i + 1;
		}
		else
		{
			temp = tab[std - i];
			tab[std - i] = tab[std + i - 1];
			tab[std + i - 1] = temp;
			i = i + 1;
		}
	}
}
