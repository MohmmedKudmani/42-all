/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:49:42 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/26 11:49:45 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (nb < 1)
	{
		return (dest);
	}
	i = 0;
	j = len(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[50] = "Hello ";
// 	char src[] = "World!";
// 	unsigned int nb = 3;

// 	printf("Before strncat:\n");
// 	printf("dest: %s\n", dest);
// 	printf("src: %s\n", src);
// 	printf("nb: %u\n", nb);

// 	ft_strncat(dest, src, nb);

// 	printf("\nAfter strncat:\n");
// 	printf("dest: %s\n", dest);

// 	return (0);
// }
