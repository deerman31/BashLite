#include "minishell.h"

void	token_free(t_token_l *lst)
{
	t_token_n	*free_n;
	t_token_n	*tmp;

	if (lst == NULL)
		return ;
	tmp = lst->top;
	while (tmp != NULL)
	{
		free_n = tmp;
		tmp = tmp->next;
		free(free_n->word);
		free(free_n);
	}
	lst->top = NULL;
	lst->size = 0;
	free(lst);
	lst = NULL;
}
