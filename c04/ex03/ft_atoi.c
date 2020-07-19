int	ft_atoi(char *str)
{
	int count;
	int i;
	int j;
	char *str_new;
	char *str_write;

	count = 0;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str_new[j] = str[i];
			j++;
		}
		i++;
	}
	str_new[j] = '\0';
	i = 0;
	while((str_new[i] != '+') || (str_new[i] !='-'))
	{
		if (str_new[i] == '-')
			count++;
	}
	if (count % 2 == 0)
		str_write[0] = '-';
	i = 0;
	while (str_new[i] != '\0')
	{
		if ((str_new[i] <'0') || (str_new[i] > '9'))
		{
			return (str_write);
		}
		str_write[1+i] = str_new[i];
		i++;
	}
	return (str_write);

}
