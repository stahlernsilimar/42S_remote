int	 ft_iterative_power(int nb, int power)
{
	int temp;

	temp = 1;
	if (power < 0)
		return (0);
	while(power >= 1)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}
