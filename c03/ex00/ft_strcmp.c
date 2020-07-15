int	ft_strcmp(char *s1, char *s2)
{
	int num;

	num = 0;
	while (s1[num]!='\0' && s2[num]!='\0')
	{
		if (s1[num] < s2[num])
			return (-1);
		else if (s1[num] > s2[num])
			return (1);
		else
			return (0);
	}
}
