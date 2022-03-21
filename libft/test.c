#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    apple[100] = "apple";
    char    banana[100] = "ap";

    printf("%s", ft_strtrim(apple, banana));
    return (0);
}
