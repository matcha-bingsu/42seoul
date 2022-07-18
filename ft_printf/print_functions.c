#include <unistd.h>

int int_nbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		int_nbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
    return (get_int_len(n));
}

unsigned int    unsigned_nbr(unsigned int n)
{
    if (n > 9)
        unsigned_nbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
    return (get_unsigned_len(n));
}

int get_string(char* str)
{
    int count;

    count = 0;
    while (*str)
    {
        write(1, str, 1);
        count++;
    }
    return (count);
}

int pointer_nbr(unsigned long long ptr)
{
    int *tmp;
    int cnt;

    cnt = get_hex_len(ptr);
    tmp = (int *)malloc(sizeof(int) * cnt);
    if (!tmp)
    {
        free(tmp);
        return (-1);
    }
    for (int i = cnt - 1; i >= 0; i--)
    {
        tmp[i] = ptr % 16;
        ptr /= 16;
    }
    write(1, "0x", 2);
    for (int i = 0; i < cnt; i++)
        write(1, &"0123456789abcdef"[tmp[i]], 1);
    free(tmp);
    return (cnt);
}

int hex_nbr(unsigned int n, char c)
{
    char    *ref;
    int     *tmp;
    int     cnt;

    if (c == 'x')
        ref = "0123456789abcdef";
    else 
        ref = "0123456789ABCDEF";

    cnt = get_hex_len((unsigned long long) n);
    tmp = (int *)malloc(sizeof(int) * cnt);
    if (!tmp)
    {
        free(tmp);
        return (-1);
    }
    for (int i = cnt - 1; i >= 0; i--)
    {
        tmp[i] = n % 16;
        n /= 16;
    }
    for (int i = 0; i < cnt; i++)
        write(1, &ref[tmp[i]], 1);
    free(tmp);
    return (cnt);
}