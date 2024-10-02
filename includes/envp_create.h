#ifndef ENVP_CREATE_H
# define ENVP_CREATE_H

# include <stdlib.h>

void	envp_all_free(char **strs);
int		envp_re_create(t_env_lst *lst);
int		envp_create(t_env_lst *lst);

#endif
