#include "get_next_line.h"

static size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*re;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	re = (char *)malloc(len);
	if (!re)
		return (0);
	while (*s1)
		re[i++] = *s1++;
	while (*s2)
		re[i++] = *s2++;
	re[i] = 0;
	return (re);
}

char	*ft_strdup(const char *string)
{
	int		len;
	char	*re;

	len = ft_strlen(string);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	len = -1;
	while (string[++len])
		re[len] = string[len];
	re[len] = '\0';
	return (re);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size > 0)
	{
		while (src[i] && i + 1 < size)
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;

	re = 0;
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (s)
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		re = (char *)malloc(len + 1);
		if (!re)
			return (0);
		ft_strlcpy(re, s + start, len + 1);
	}
	return (re);
}

char	*ft_strchr(const char *s, int c)
{
	char	tmp;

	tmp = (char)c;
	while (*s)
	{
		if (*s == tmp)
			return ((char *)s);
		s++;
	}
	if (!tmp)
		return ((char *)s);
	return (0);
}