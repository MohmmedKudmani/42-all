/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:18:44 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/09 15:19:11 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	number_to_char(int n)
{
	int	digit_one;
	int	digit_two;

	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		digit_one = n / 10;
		digit_two = n % 10;
		ft_putchar(digit_one + '0');
		ft_putchar(digit_two + '0');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			number_to_char(a);
			ft_putchar(' ');
			number_to_char(b);
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
