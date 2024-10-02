#include "minishell.h"

int	make_pipes(void)
{
	int	i;

	i = 0;
	while (i < g_data->pipe_count)
	{
		if (pipe(g_data->pipe[i]) < 0)
		{
			perror("pipe");
			g_data->status = 1;
			return (1);
		}
		i++;
	}
	return (0);
}

int	make_process_fork(void)
{
	int	i;
	int	pid;

	i = 0;
	if (is_heredoc() == 1)
		return (1);
	while (i < g_data->pipe_count + 1)
	{
		set_signal_def();
		pid = fork();
		if (pid < 0)
		{
			perror("fork");
			g_data->status = 1;
			return (1);
		}
		else if (pid == 0)
			child_process(i);
		else
			parent_process(i);
		i++;
	}
	wait_process();
	return (0);
}

void	exec_avec_pipe(void)
{
	if (make_pipes() == 1)
		return ;
	if (make_process_fork() == 1)
		return ;
}
