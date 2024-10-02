#include "minishell.h"

void	put_file_last(t_file_n *f, t_node_n *n)
{
	t_file_n	*p;
	t_file_n	*tmp;

	p = n->files->top;
	while (p != NULL)
	{
		tmp = p;
		p = p->next;
	}
	tmp->next = f;
}

t_file_n	*make_files(t_token_n *p, t_node_n *n)
{
	t_file_n	*f;

	if (n->files == NULL)
	{
		n->files = (t_file_l *)malloc(sizeof(t_file_l));
		if (n->files == NULL)
			return (NULL);
		n->files->top = NULL;
		n->files->size = 0;
	}
	f = (t_file_n *)malloc(sizeof(t_file_n));
	if (f == NULL)
		return (NULL);
	f->type = p->type;
	f->op_file = p->next->word;
	f->next = NULL;
	if (n->files->top == NULL)
		n->files->top = f;
	else
		put_file_last(f, n);
	n->files->size++;
	return (f);
}
