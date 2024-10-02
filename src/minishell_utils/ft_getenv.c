#include "minishell.h"

char	*ft_getenv(char *str)
{
	t_env_node	*node;

	node = g_data->envlst->top;
	while (node != NULL)
	{
		if (!ft_strcmp(node->key, str))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
