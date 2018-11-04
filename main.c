#include "ft_ssl_md5.h"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        if (!ft_strcmp(av[1], "md5"))
        {
            ft_md5();
        }
//        else if (!ft_strcmp(av[1], "sha256"))
    }
    return 0;
}