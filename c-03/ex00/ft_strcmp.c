/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:48:40 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/26 11:48:48 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";
// 	char str3[] = "World";

// 	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
// 	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
// 	printf("Comparing '%s' and '%s': %d\n", str3, str1, ft_strcmp(str3, str1));

// 	return (0);
// }
