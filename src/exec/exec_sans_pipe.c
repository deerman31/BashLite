#include "minishell.h"

int	exec_sans_pipe(void)
{
	t_node_n	*n;

	n = g_data->node_head.top;
	if (n != NULL)
	{
		if (n->cmds[0] == NULL)
		{
			just_files(n);
			return (1);
		}
		if (conf_in_out(n) == 1)
			return (0);
		if (n->blt >= 2)
		{
			if (!exec_builtin(n))
				return (0);
		}
		else
			exec_others(n);
	}
	return (1);
}
