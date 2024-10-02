#include "minishell.h"

size_t	fill_space(char *s)
{
	size_t		i;

	i = 0;
	while (s[i] && ft_strchr(SPACES, s[i]))
		i++;
	return (i);
}

void	add_back(t_token_l *lst, t_token_n *new)
{
	t_token_n	*last;

	if (lst->top == NULL)
		lst->top = new;
	else
	{
		last = lst->top;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
	lst->size += 1;
}

size_t	split_len(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] && !ft_strchr(SPLIT_C2, s[i]) && !ft_strchr(SPACES, s[i]))
		i += 1;
	return (i);
}

size_t	quote_len(const char *s, int flag)
{
	size_t		i;

	i = 0;
	if (flag == 1)
	{
		while (s[i] && s[i] != '\'')
			i += 1;
	}
	else if (flag == 2)
	{
		while (s[i] && s[i] != '"')
			i += 1;
	}
	return (i);
}

size_t	space_len(char *s)
{
	size_t		len;

	len = 0;
	while (s[len] && ft_strchr(" \t", s[len]))
		len += 1;
	return (len);
}
