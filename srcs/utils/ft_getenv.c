#include "../../includes/ft_getenv.h"

char	*get_env_value(char *key, char **envp)
{
	int i;

	i = -1;
	while (envp[++i])
	{
		if ((!ft_strncmp(key, envp[i], ft_strlen(key)))
						&& envp[i][ft_strlen(key)] == '=')
			return (envp[i] + ft_strlen(key) + 1);
	}
	return ("");
}