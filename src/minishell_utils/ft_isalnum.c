#include "minishell.h"

int	ft_isalpha(int num)
{
	if ('A' <= num && num <= 'Z')
		return (1);
	else if ('a' <= num && num <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
