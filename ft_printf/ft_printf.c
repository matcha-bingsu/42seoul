#include "ft_print.h"

int    get_format(va_list *ap, char c)
{
    if (c == 's')
        return (get_string(va_arg(*ap, char *)));
    else if (c == 'd' || c == 'i')
        return (int_nbr(va_arg(*ap, int)));
    else if (c == 'p')
        return (pointer_nbr(va_arg(*ap, unsigned long long)));
    else if (c == 'u')
        return(unsigned_nbr(va_arg(*ap, unsigned int)));
    else if (c == 'x' || c == 'X')
        return(hex_nbr(va_arg(*ap, unsigned int), c));
    else
        return (get_char(va_arg(*ap, char)));
}

int    ft_printf(const char* str, ...)
{
    va_list ap;
    int     ans;
    int     tmp;

    ans = 0;
    va_start(ap, str);
    while(str != '\0')
    {
        if (str != '%')
            ans += write(1, str, 1);
        else
        {
            tmp = get_format(&ap, str++);
            if (tmp != -1)
                ans += tmp;
            else
                return (-1);
        }
        str++;
    }
    va_end(ap);
    if (ans < 0)
        return (-1);
    return (ans);
}