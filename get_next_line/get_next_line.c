#include "get_next_line.h"

static void	free_mp(char **ptr)
{
	free(*ptr);
	*ptr = 0;
}

static char	*extract(char **table)
{
	int		i;
	char	*res;
	char	*old;

	i = 0;
	while ((*table)[i] && (*table)[i] != '\n')
		i++;
	res = ft_substr(*table, 0, i + 1);
	old = *table;
	*table = ft_strdup(&(*table)[i + 1]);
	free_mp(&old); 
	return (res);
}

static char	*before_extract(char **table, int flag)
{
	if (flag == -1 || (flag == 0 && !**table))
	{
		free_mp(table);
		return (0);
	}
	if (!ft_strchr(*table, '\n') && **table)
	{
		char	*tmp;
		tmp = ft_strdup(*table);
		free_mp(table);
		return (tmp);
	} 
	if (ft_strchr(*table, '\n'))
		return (extract(table));
	return (0);
}

static char	*get_line(int fd, char *arr, char **table) 
{
	int		flag;
	char	*tmp;

	if (ft_strchr(*table, '\n')) 
		return(extract(table)); 
	while (!ft_strchr(*table, '\n'))
	{
		flag = read(fd, arr, BUFFER_SIZE);
		if (flag == -1 || flag == 0) 
			break;
		arr[flag] = '\0'; 
		tmp = *table; 
		*table = ft_strjoin(*table, arr); 
		if (!(*table))
			break;
		free_mp(&tmp);
	} 
	return (before_extract(table, flag)); 
}

char	*get_next_line(int fd)
{
	static char	*table[OPEN_MAX + 1];
	char		*arr;
	char		*res;
	
	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1)
		return (0);
	arr = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!arr)
		return (0); 
	if (!table[fd])
		table[fd] = ft_strdup(""); 
	res = get_line(fd, arr, &table[fd]); 
	free_mp(&arr);
	return (res);
}