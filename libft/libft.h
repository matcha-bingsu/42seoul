/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:28:34 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/18 17:08:03 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>

void    ft_bzero(void *s, size_t n);
int     ft_atoi(const char *nptr);
void    *ft_calloc(size_t nmemb, size_t size);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memchr(const void *buf, int c, size_t count);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t count);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(const char *s, int c);
char	*ft_strdup(const char *string);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char * dest, const char * src, size_t size);
size_t	ft_strlen(const char *s);
int strncmp(const char* str1, const char* str2, size_t len);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
int tolower(int ch);
int toupper(int ch);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif
