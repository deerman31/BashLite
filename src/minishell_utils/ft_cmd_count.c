#include "minishell.h"

size_t	ft_cmd_count(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
		i += 1;
	return (i);
}
