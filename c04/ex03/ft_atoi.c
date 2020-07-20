int	ft_atoi(char *str)
{
	int count;
	int i;
	int ret;

	count = 0;
	i = 0;
	ret = 0;
	while (str[i] != '\0' && (((str[i] > 8) && (str[i] < 14)) || str[i] == ' '))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] =='-'))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			ret = (ret * 10)+ (str[i] - '0');
		i++;
	}
	if (count % 2 == 1)
		ret = ret * (-1);
	return (ret);
}
