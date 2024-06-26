/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalqader <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:05:36 by yalqader          #+#    #+#             */
/*   Updated: 2024/06/08 15:16:41 by yalqader         ###   ########.fr       */
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
		ft_putchar('|');
		j = 1;
		while (j <= x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
}

void	vertical(int y)
{
	int	i;

	ft_putchar('o');
	ft_putchar('\n');
	i = 1;
	while (i <= y - 2)
	{
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('o');
}

void	horizentalborder(int x)
{
	int	i;

	ft_putchar('o');
	i = 1;
	while (i <= x - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
	{
		write(1, "Please enter a number above than 0", 35);
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (y == 1)
	{
		horizentalborder(x);
	}
	else if (x == 1)
	{
		vertical(y);
	}
	else
	{
		horizentalborder(x);
		body(x, y);
		horizentalborder(x);
	}
}
