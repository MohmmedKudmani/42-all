// #include <stdio.h>

int	whitespaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

// int	main(void)
// {
// 	char *test1 = "42";
// 	char *test2 = "   -42";
// 	char *test3 = "4193 with words";
// 	char *test4 = "words and 987";
// 	char *test5 = "-2147483648";
// 	char *test6 = "2147483647";

// 	printf("Input: \"%s\", Output: %d\n", test1, ft_atoi(test1));
// 	printf("Input: \"%s\", Output: %d\n", test2, ft_atoi(test2));
// 	printf("Input: \"%s\", Output: %d\n", test3, ft_atoi(test3));
// 	printf("Input: \"%s\", Output: %d\n", test4, ft_atoi(test4));
// 	printf("Input: \"%s\", Output: %d\n", test5, ft_atoi(test5));
// 	printf("Input: \"%s\", Output: %d\n", test6, ft_atoi(test6));

// 	return (0);
// }