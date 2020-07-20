int ft_sqrt(int nb)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	while (temp < nb)
	{
		i++;
		temp = i * i;
	}
	if (nb == temp)
		return (i);
	else
		return (0);
}
