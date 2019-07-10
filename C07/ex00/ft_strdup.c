#include <stdlib.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char *ft_strdup(char *src)
{
	char *str;
	int a;

	a = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(a +1))))
	while (src[a])
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
