#include "ft_ssl_md5.h"

char **get_bits(size_t old_len)
{
    char **tmp_bits;
    int i;
    int j;

    tmp_bits = malloc((sizeof(char *) * 8));
    i = 7;
    while (i >= 0)
        tmp_bits[i--] = ft_memalloc(8);
    i = 7;
    j = 7;
    while (old_len > 0 && i >= 0)
    {
        if (old_len % 2)
            tmp_bits[i][j] = 1;
        if (--j < 0)
        {
            j = 7;
            i--;
        }
        old_len /= 2;
    }
    return (tmp_bits);
}

char *append_length(char *str, size_t old_len, size_t new_len)
{
    size_t iter;
    int     j;
    int     i;
    char    **bits;

    iter = new_len - 8;
    bits = get_bits(old_len);
    i = 0;
    while (iter < new_len)
    {
        j = 0;
        while (j < 8)
        {
            if (bits[i][j])
                str[iter] |= 1 << (j - 7 >= 0 ? (j - 7) : (j - 7) * -1 );
            j++;
        }
        i++;
        iter++;
    }
    return (str);
}