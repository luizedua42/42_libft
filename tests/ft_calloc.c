
#include <stdlib.h>
#include <string.h>


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	vartimes;

	vartimes = nmemb * size;
	if (vartimes < __INT_MAX__)
		mem = malloc(vartimes);
	if (mem != NULL)
		bzero(mem, vartimes);
	return (mem);
}
