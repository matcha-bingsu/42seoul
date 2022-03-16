#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    printf("%d\n", 9 + '0' == '9');
    char    apple[100] = "apple\0b";
    char    banana[100] = "apple\0a";

    // printf("%d", ft_memcmp(apple, banana, 7));
    return (0);
}
