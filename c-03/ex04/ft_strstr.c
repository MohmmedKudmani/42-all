/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <m7mdsy976@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:01:29 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/25 13:22:23 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "Hello, world!";
// 	char	str2[] = "world";
// 	char	str3[] = "Hello, world!";
// 	char	str4[] = "";
// 	char	*result1;
// 	char	*result2;

// 	result1 = ft_strstr(str1, str2);
// 	result2 = ft_strstr(str3, str4);
// 	if (result1 != NULL)
// 		printf("Found substring: '%s'\n", result1);
// 	else
// 		printf("Substring not found.\n");
// 	if (result2 != NULL)
// 		printf("Found substring: '%s'\n", result2);
// 	else
// 		printf("Substring not found.\n");
// 	return (0);
// }
