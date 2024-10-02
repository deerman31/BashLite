#include "minishell.h"

size_t	vers_strlen(char *s, char *end_s)
{
	size_t		len;

	if (s == NULL)
		return (0);
	if (end_s == NULL)
		return (ft_strlen(s));
	len = 0;
	while (s[len] && !ft_strchr(end_s, s[len]))
		len += 1;
	return (len);
}
