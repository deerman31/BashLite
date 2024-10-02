#include "minishell.h"

t_env_node	*envnode_new(char *key, char *value)
{
	t_env_node	*new;

	new = malloc(sizeof(t_env_node));
	if (new == NULL)
	{
		free(key);
		key = NULL;
		if (value != NULL)
		{
			free(value);
			value = NULL;
		}
		return (NULL);
	}
	new->key = key;
	new->value = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
