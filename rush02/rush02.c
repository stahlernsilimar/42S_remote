/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 11:40:40 by hemin             #+#    #+#             */
/*   Updated: 2020/07/18 17:46:58 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFF_SIZE 4096

void	ft_putstr(char *str)
{
	int digit;

	digit = 0;
	while (*(str + digit) != '\n')
	{
		digit++;
	}
	write(1, str, digit);
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	char *test;
	int test2;
	int fd;
	int ret;
//	char num;
	int i;
//	char *target;
	char buff[BUFF_SIZE + 1];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}

	fd = open("numbers.dict", O_RDONLY);

	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}

	ret = read(fd, buff, BUFF_SIZE);
	buff[ret] = '\0';

	ft_putstr(buff);

	close(fd);

	test = argv[1];
	test2 = argc;
}
