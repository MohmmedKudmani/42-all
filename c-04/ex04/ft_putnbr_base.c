#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
		{
			return (0);
		}
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		error;
	long	nb;

	error = check(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(42, "01"); // Binary
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "0123456789ABCDEF"); // Hexadecimal
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "0123456789"); // Decimal
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "poneyvif"); // Custom base
// 	write(1, "\n", 1);

// 	return (0);
// }