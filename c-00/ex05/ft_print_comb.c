/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:37:53 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/09 14:35:49 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(char num1, char num2, char num3)
{
	ft_putchar(num1 + '0');
	ft_putchar(num2 + '0');
	ft_putchar(num3 + '0');
	if (num1 == 7 && num2 == 8 && num3 == 9)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				print_number(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
