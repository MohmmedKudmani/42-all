#include <stdio.h>
#include <stdlib.h>

int	ft_allocate_memory(int **buffer, int size)
{
	*buffer = malloc(size * sizeof(int));
	if (*buffer == NULL)
	{
		return (-1);
	}
	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	bound = max - min;
	if (ft_allocate_memory(&buffer, bound) == -1)
	{
		*range = NULL;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}

/* int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 25;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
} */
