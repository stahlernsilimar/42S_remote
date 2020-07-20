int	ft_iterative_factorial(int nb)
{
	int temp;

	temp = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		temp = temp * nb;
		nb--;
	}
	return (temp);
}
