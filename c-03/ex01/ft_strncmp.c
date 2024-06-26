/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:49:01 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/26 11:49:04 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
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
// 	unsigned int n1 = 5;
// 	unsigned int n2 = 3;

// 	printf("Comparing '%s' and '%s' (first %u characters): %d\n", str1, str2,
// 		n1, ft_strncmp(str1, str2, n1));
// 	printf("Comparing '%s' and '%s' (first %u characters): %d\n", str1, str3,
// 		n2, ft_strncmp(str1, str3, n2));
// 	printf("Comparing '%s' and '%s' (first %u characters): %d\n", str3, str1,
// 		n2, ft_strncmp(str3, str1, n2));

// 	return (0);
// }
