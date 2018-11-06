#include "ft_ssl_md5.h"

void    get_origin_data(char **av, char **str)
{
    *str = *av;
}

void    ft_md5(char **av)
{
    char *stdin;
    char *tmp;
    char stdout[32];
    size_t new_len;

    new_len = 0;
    get_origin_data(av, &stdin);
    tmp = append_padding_bits(stdin, &new_len);
    tmp = append_length(tmp, ft_strlen(stdin), new_len);
    ft_printf("%s\n", tmp);
}
