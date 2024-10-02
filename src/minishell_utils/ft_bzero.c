#include "minishell.h"

static void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*b_cpy;
	unsigned char	c_str;

	i = 0;
	c_str = (unsigned char)c;
	b_cpy = (unsigned char *)b;
	while (len--)
	{
		b_cpy[i] = c_str;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
