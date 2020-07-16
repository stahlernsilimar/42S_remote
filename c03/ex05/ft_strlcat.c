/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:17:58 by hemin             #+#    #+#             */
/*   Updated: 2020/07/16 21:08:41 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int num_dest;
	unsigned int num_src;
	unsigned int max_size;
	unsigned int init_size;
	int i;

	num_dest = 0;
	while (dest[num_dest] != '\0')
		num_dest++;
	while (src[num_src] != '\0')
		num_src++;
	if (num_dest < size)
		init_size = num_dest;
	else
		init_size = size;

	while (i <= init_size)
	{
		dest[num_dest] = src[i];
		num_dest++;
		i++;
	}
		dest[i] = '\0';
	return(init_size);


	/* test case

	char dest[100];
	strcpy(dest, "a");
	printf("system:\n");
	printf("%lu %s\n", strlcat(dest, "power", 4), dest);
	printf("%lu %s\n", strlcat(dest, "po", 100), dest);
	printf("%lu %s\n", strlcat(dest, "ma", 2), dest);
	printf("%lu %s\n", strlcat(dest, "naver", 20), dest);
	printf("%lu %s\n", strlcat(dest, "zero", 0), dest);
	printf("\n----------------\nUser Created:\n");
	strncpy(dest, "a", 70);
	printf("%u %s\n", ft_strlcat(dest, "power", 4), dest);
	printf("%u %s\n", ft_strlcat(dest, "po", 100), dest);
	printf("%u %s\n", ft_strlcat(dest, "ma", 2), dest);
	printf("%u %s\n", ft_strlcat(dest, "naver", 20), dest);
	printf("%u %s\n", ft_strlcat(dest, "zero", 0), dest);

	*/
}
