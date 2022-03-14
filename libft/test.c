#include <stdio.h>
#include <ctype.h>
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
    printf("%d\n", 9 + '0' == '9');
    char    apple[100] = "apple\0b";
    char    banana[100] = "apple\0a";

    // printf("%d", ft_memcmp(apple, banana, 7));
    return (0);
}