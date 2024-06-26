/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:25:11 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/20 15:36:36 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	check(char c)
{
	if ((c >= ' ') && (c <= '~'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	int				checked;

	i = 0;
	while (str[i] != '\0')
	{
		checked = check(str[i]);
		if (checked == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
//	char	*string;
//
//	string = "Hello\tWorld";
//	printf("%d", ft_str_is_printable(string));
//	return (0);
// }
