#ifndef CMD_SPLIT_H
# define CMD_SPLIT_H
# include <stdlib.h>
# include "structs.h"

t_token			*cmd_split(char const *s, char c);
void			put_quote_flag(char const *s, int *quote);
int				ft_split_cnt(char const *s, const char c);
char			*ft_alloc_word(int *idx, char const *s, const char c);
#endif