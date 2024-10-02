#include "minishell.h"

int	heredoc_pipe_conf(t_node_n *n, int i)
{
	int			rtn;

	if (n->files != NULL)
	{
		rtn = here_doc_except_last_p(n, i);
		if (rtn == 1)
			return (1);
		rtn = decide_in_heredoc(n, i);
		if (rtn == 1)
			return (1);
	}
	return (0);
}
