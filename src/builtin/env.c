#include "minishell.h"

void	env_blt(t_node_n *n)
{
	size_t	i;

	if (n->cmds[1] != NULL)
	{
		error_write("minishell: env: %s: no arguments are required.\n",
			n->cmds[1], 1);
		return ;
	}
	i = 0;
	while (g_data->envp[i])
	{
		if (ft_strchr(g_data->envp[i], '='))
			printf("%s\n", g_data->envp[i]);
		i += 1;
	}
	g_data->status = 0;
}
