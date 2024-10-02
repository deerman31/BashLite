#include "minishell.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t		len;

	if (s == NULL)
		return (0);
	len = ft_strlen(s);
	return ((int)write(fd, s, len));
}
