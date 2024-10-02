#ifndef ENV_LST_H
# define ENV_LST_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_env_node
{
	char				*key;
	char				*value;
	size_t				sort_n;
	struct s_env_node	*next;
	struct s_env_node	*prev;
}				t_env_node;

typedef struct s_env_lst
{
	t_env_node	*top;
	size_t		size;
}				t_env_lst;

int				envlst_create(char **envp);
t_env_node		*envnode_new(char *key, char *value);
t_env_lst		*envlst_new(void);
void			envlst_add(t_env_lst *lst, t_env_node *node);
void			lstsort_num(t_env_lst *lst);
void			envlst_free(void);

#endif
