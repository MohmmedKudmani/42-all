/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:02:59 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/20 15:09:32 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	check(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
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
//	string = "435346h";
//	printf("%d", ft_str_is_numeric(string));
//	return (0);
// }
