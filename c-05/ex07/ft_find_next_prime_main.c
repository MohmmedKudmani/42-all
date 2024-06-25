// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
// 	printf("%d -> %d\n", -12, ft_is_prime(-12));
// 	printf("%d -> %d\n", 0, ft_is_prime(0));
// 	printf("%d -> %d\n", 1, ft_is_prime(1));
// 	printf("%d -> %d\n", 2, ft_is_prime(2));
// }