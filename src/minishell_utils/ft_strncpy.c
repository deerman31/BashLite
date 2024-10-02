#include "minishell.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	i;
	size_t	j;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i] && i < len)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
