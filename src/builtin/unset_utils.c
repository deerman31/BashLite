#include "minishell.h"

size_t	equal_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '=')
		i += 1;
	return (i);
}

void	unset_error_message2(char *s)
{
	error_write("minishell: unset: `%s': not a valid identifier\n", s, 1);
}
