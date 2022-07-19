#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int				get_int_len(int n);
unsigned int	get_unsigned_len(unsigned int n);
int				get_char(char c);
int				get_hex_len(unsigned long long n);
int				int_nbr(int n);
unsigned int	unsigned_nbr(unsigned int n);
int				get_string(char* str);
int				pointer_nbr(unsigned long long ptr);
int				hex_nbr(unsigned int n, char c);
int             ft_printf(const char* str, ...);

#endif