int	fibonacci_sub(int index, int i, int j)
{
	if (index == 0)
		return (i);
	if (index == 1)
		return (j);
	return (fibonacci_sub(index - 1, j, i + j));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return(fibonacci_sub(index, 0, 1));
}
