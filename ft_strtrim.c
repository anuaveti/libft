#include "libft.h"
static int	setcheck(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && setcheck(*start, set))
		++start;
	while (start < end && setcheck(*(end - 1), set))
		--end;
	trim = ft_substr(start, 0, end - start);
	return (ret);
}
