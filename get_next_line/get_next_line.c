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
	*table = ft_strdup(*table + i + 1);
	free_mp(&old);
	return (res);
}

static char	*before_extract(char **arr, char **table, int flag)
{
	if (!(*table) || (flag == 0 || (flag == -1 && !(*table))))
	{
		free_mp(table);
		return (0);
	}
	else if (!ft_strchr(*table, '\n') && flag < BUFFER_SIZE) // 개행없고 파일의 끝에 다다른 경우
	{
		free(*arr);
		(*arr) = ft_strdup(*table);
		free_mp(table);
		return (*arr);
	}
	else
		return (extract(table));
}

static char	*get_line(int fd, char **arr, char **table) //table = 해당 인덱스 배열
{
	int		flag;
	char	*tmp;

	flag = 1;
	if (ft_strchr(*table, '\n'))
		return(extract(table));
	while (!ft_strchr(*table, '\n') && flag > 0)
	{
		flag = read(fd, *arr, BUFFER_SIZE);
		if (flag == 0 || flag == -1)
			break;
		(*arr)[BUFFER_SIZE] = '\0';
		tmp = *table;
		*table = ft_strjoin(*arr, *table);
		if (!*table)
			break;
		free_mp(&tmp);
	}
	return (before_extract(arr, table, flag));
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
	res = get_line(fd, &arr, &table[fd]);
	free_mp(&arr);
	return (res);
}