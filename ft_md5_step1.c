#include "ft_ssl_md5.h"

size_t    find_mod(int len)
{
    size_t n;

    n = 1;
    while (len > (64 * n))
        n++;
    return (n);
}

char*    append_padding_bits(char *str, size_t *new_len)
{
    int len;
    size_t n;
    int i;
    char *new_str;

    i = 0;
    len = (int)ft_strlen(str) + 1;
    n = find_mod(len);
    *new_len = 64 * n;
    new_str = ft_memalloc((size_t) (64 * n));
    while (str[i] != '\0')
    {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] |= 1 << 7;
    return (new_str);
}