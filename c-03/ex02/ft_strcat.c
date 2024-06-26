/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:49:26 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/26 11:49:29 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[50] = "Hello";
// 	char src[] = " World!";

// 	printf("Before strcat:\n");
// 	printf("dest: %s\n", dest);
// 	printf("src: %s\n", src);

// 	ft_strcat(dest, src);

// 	printf("\nAfter strcat:\n");
// 	printf("dest: %s\n", dest);

// 	return (0);
// }
