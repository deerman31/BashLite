#include "minishell.h"

t_env_lst	*envlst_new(void)
{
	t_env_lst	*lst;

	lst = malloc(sizeof(t_env_lst));
	if (lst == NULL)
		return (NULL);
	lst->top = NULL;
	lst->size = 0;
	return (lst);
}
