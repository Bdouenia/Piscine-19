#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;

	i = 0;
	str = 0;
	if (min >= max)
		return (str);
	if (!(str = (int*)malloc(sizeof(*str) * (max - min))))
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
