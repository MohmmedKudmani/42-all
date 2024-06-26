/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:50:04 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/26 11:50:16 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dest_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
	{
		return (src_len + size);
	}
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char dest1[20] = "Hello, ";
// 	char src1[] = "world!";
// 	unsigned int size1 = 20;

// 	char dest2[10] = "Hello";
// 	char src2[] = "world";
// 	unsigned int size2 = 5;

// 	// Test cases
// 	unsigned int result1 = ft_strlcat(dest1, src1, size1);
// 	printf("Test 1: %s, Total Length: %u\n", dest1, result1);

// 	unsigned int result2 = ft_strlcat(dest2, src2, size2);
// 	printf("Test 2: %s, Total Length: %u\n", dest2, result2);

// 	return (0);
// }
