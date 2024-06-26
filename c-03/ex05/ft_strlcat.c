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
	unsigned int	destLen;
	unsigned int	srcLen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	destLen = j;
	srcLen = ft_strlen(src);
	if (size == 0 || size <= destLen)
	{
		return (srcLen + size);
	}
	while (src[i] != '\0' && i < size - destLen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destLen + srcLen);
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