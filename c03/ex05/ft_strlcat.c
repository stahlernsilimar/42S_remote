/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:17:58 by hemin             #+#    #+#             */
/*   Updated: 2020/07/18 02:30:51 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int num_dest;
	unsigned int num_src;
	unsigned int return_num;
	unsigned int init_size;
	unsigned int buff;
	int i;

	num_dest = 0;
	while (dest[num_dest] != '\0')
		num_dest++;
	while (src[num_src] != '\0')
		num_src++;

	if (size <= 0)
		return(num_dest - 1);

	return_num = num_dest + num_src;
	buff = size - num_src - 1;
	while (num_dest <= size || src[i] != '\0')
	{
		dest[num_dest] = src[i];
		num_dest++;
		i++;
	}
		dest[i] = '\0';
	return(return_num);


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
