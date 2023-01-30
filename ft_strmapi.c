#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*d;
	unsigned int	i;

	if (!s)
		return (0);
	d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!d)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		d[i] = f(i, s[i]);
		++i;
	}
	d[i] = '\0';
	return (d);
}
