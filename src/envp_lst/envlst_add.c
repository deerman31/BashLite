#include "minishell.h"

void	envlst_add(t_env_lst *lst, t_env_node *node)
{
	t_env_node	*last;

	last = lst->top;
	if (lst->top == NULL)
		lst->top = node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = node;
		node->prev = last;
	}
	lst->size += 1;
}
