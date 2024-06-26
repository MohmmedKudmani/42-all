/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalqader <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:34:24 by yalqader          #+#    #+#             */
/*   Updated: 2024/06/08 14:59:18 by yalqader         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	body(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y - 2)
	{
		ft_putchar('B');
		j = 1;
		while (j <= x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
}

void	vertical(int y)
{
	int	i;

	ft_putchar('A');
	ft_putchar('\n');
	i = 1;
	while (i <= y - 2)
	{
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('C');
}

void	header(int x)
{
	int	i;

	ft_putchar('A');
	i = 1;
	while (i <= x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	footer(int x)
{
	int	i;

	ft_putchar('C');
	i = 1;
	while (i <= x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
	{
		write(1, "Please enter a number greater than 0", 36);
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (y == 1)
	{
		header(x);
	}
	else if (x == 1)
	{
		vertical(y);
	}
	else
	{
		header(x);
		body(x, y);
		footer(x);
	}
}
