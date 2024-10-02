#include "minishell.h"

void	last_free(void)
{
	long	status;

	status = g_data->status;
	envp_all_free(g_data->envp);
	envlst_free();
	free(g_data);
	g_data = NULL;
	printf("exit\n");
	exit (status);
}
