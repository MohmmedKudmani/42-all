#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	d = ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int	main(void)
{
	char original[] = "Hello, World!";

	char *duplicate = ft_strdup(original);

	if (duplicate == NULL)
	{
		perror("ft_strdup");
		return (EXIT_FAILURE);
	}

	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
}*/
