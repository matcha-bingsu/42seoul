#include <unistd.h>

int get_int_len(int n)
{
    int     res;
    long    tmp;
    
    res = 0;
    if (n < 0)
    {
        res++;
        tmp = -n;
    }
    else
        tmp = n;
    while (tmp > 0)
    {
        tmp /= 10;
        res++;
    }
    return (res);
}

unsigned int    get_unsigned_len(unsigned int n)
{
    unsigned int    res;

    res = 0;
    while (n > 0)
    {
        n /= 10;
        res++;
    }
    return (res);
}

int get_char(char c)
{
	write(1, &c, 1);
    return (1);
}

int get_hex_len(unsigned long long n)
{
    int cnt;

    cnt = 0;
    while (n >= 0)
    {
        n /= 16;
        cnt++;
    }
    return (cnt);
}