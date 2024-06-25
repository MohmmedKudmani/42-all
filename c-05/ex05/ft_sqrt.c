// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

// int	main(void)
// {
// 	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
// 	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
// 	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
// 	printf("sqrt of %d is %d\n", 1240045925, ft_sqrt(1240045925));
// 	printf("sqrt of %d is %d\n", 4143395200, ft_sqrt(4143395200));
// 	return (0);
// }