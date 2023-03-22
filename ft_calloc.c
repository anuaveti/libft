#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;

	if(!(cal = (void *)malloc(count * size)))
		return (NULL);
	cal = ft_memset(cal, 0, count * size);
	return (cal);
}
