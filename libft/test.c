#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    apple[100] = "apple";

    printf("%s", ft_substr(apple, 2, 7));
    return (0);
}
