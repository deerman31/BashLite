#include "minishell.h"

void	child_process(int i)
{
	t_node_n	*n;
	int			j;

	n = g_data->node_head.top;
	j = 0;
	while (j < i)
	{
		n = n->next;
		j++;
	}
	if (n->cmds[0] == NULL)
	{
		just_files_pipe(n);
		exit(0);
	}
	if (conf_in_out_fork(n, i) == 1)
		exit(1);
	if (n->blt >= 2)
	{
		exec_builtin(n);
		exit(0);
	}
	else
		exec_others_sans_fork(n);
}
