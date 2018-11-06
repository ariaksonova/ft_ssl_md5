#ifndef FT_SSL_MD5_H
#define FT_SSL_MD5_H

#include "libft/libft.h"

void ft_md5(char **av);
void get_origin_data(char **av, char **str);
char* append_padding_bits(char *str, size_t *new_len);
char *append_length(char *str, size_t old_len, size_t new_len);

#endif //MD5_FT_SSL_MD5_H
