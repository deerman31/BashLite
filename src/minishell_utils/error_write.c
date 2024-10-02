#include "minishell.h"

void	error_write(char *s1, char *s2, long status)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strncmp(&s1[i], "%s", 2))
		{
			write(2, s2, strlen(s2));
			i += 2;
		}
		else
		{
			write (2, &s1[i], 1);
			i += 1;
		}
	}
	g_data->status = status;
}
