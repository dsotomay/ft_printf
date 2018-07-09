
#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	if (ptr)
		free(ptr);
	if (!(ptr = (void*)malloc(sizeof(void) * size)))
		return (NULL);
	return (ptr);
}
