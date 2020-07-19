/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:40:12 by hemin             #+#    #+#             */
/*   Updated: 2020/07/19 22:03:44 by jung-par         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int get_dict_size(char *dict_name)
{
	int fd;
	char buf[1024];
	int total_len;
	int buf_len;
	fd = open(dict_name, O_RDONLY);
	total_len = 0;
	while (buf_len = read(fd, buf, 1024))
		total_len += buf_len;
	return total_len;
}
char *read_dict(char *dest, char *dict_name)
{
	int fd;
	char buf[1024];
	int buf_len;
	int i;
	int j;
	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	i = 0;
	while (buf_len = read(fd, buf, 1024))
	{
		j = 0;
		while (j < buf_len)
		{
			dest[i + j] = buf[j];
			j++;
		}
		i = i + j;
	}
	return dest;
}
int main(int argc, char *argv[])
{
	int fd;
	int i;
	char buf[1024];
	int len;
	int size;
	char *dict;
	char *dict_name;
	char *value;

	if (argc == 2)
	{
		i = 0;
		value = argv[1];
		while (value[i] != '\0')
		{
			if ((value[i] < '0') || (value[i] > '9'))
				write(1, "Error\n", 6);
			return (0);
			i++;
		}
		dict_name = "numbers.dict";
		size = get_dict_size(dict_name);
		dict = (char *)malloc(sizeof(char) * size + 1);
		read_dict(dict, dict_name);
	}
	else if (argc == 3)
	{
		dict_name = argv[1];
	}
	else
		write(1, "Error\n", 6);
		return (0);
}
