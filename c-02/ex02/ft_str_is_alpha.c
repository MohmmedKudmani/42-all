/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:37:10 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/20 15:00:07 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	check(char alpha)
{
	if ((alpha >= 'a') && (alpha <= 'z'))
	{
		return (1);
	}
	if ((alpha >= 'A') && (alpha <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int				checked;
	unsigned int	i;

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

//  int	main(void)
// {
// 	char	*string;
//
//	string = "HelloWorld";
//	printf("%d", ft_str_is_alpha(string));
//	return (0);
// }
