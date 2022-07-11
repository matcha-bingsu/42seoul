#include "get_next_line.h"

static void	free_ptr(char **ptr)
{
	free(*ptr);
	*ptr = 0;
}

static char	*extract_line(char **buffer_backup)
{
	int		i;
	char	*line;
	char	*temp_free;

	i = 0;
	while ((*buffer_backup)[i] && (*buffer_backup)[i] != '\n')
		i++;
	temp_free = *buffer_backup;
	line = ft_substr(temp_free, 0, i + 1); //만들 문자열 새로 만들고
	*buffer_backup = ft_strdup(&(*buffer_backup)[i + 1]); // 그 이후의 값으로 채워 넣어주고
	free_ptr(&temp_free);
	return (line); //해당 문자열 전달
}

static int	read_file(int fd, char **buffer, char **buffer_backup)
{
	int		bytes_read;
	char	*temp_free;

	bytes_read = 1;
	while (!ft_strchr(*buffer_backup, '\n') && bytes_read) //백업에 널이 있거나 파일 읽을 게 없으면 탈출
	{
		bytes_read = read(fd, *buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (bytes_read);
		(*buffer)[bytes_read] = '\0'; //문자열 일단 넣어주고
		temp_free = *buffer_backup; //백업에 있는거 넣어주고
		*buffer_backup = ft_strjoin(temp_free, *buffer); //이전에 있는거와 버퍼에서 받을 걸 넣어주고
		free_ptr(&temp_free); // 프리해주고 
	}
	return (bytes_read); // 있다면 리턴해줘 6이겠지 지금 케이스에서는  
}

static char	*get_line(int fd, char **buffer, char **buffer_backup) // fd, 담아두는 배열의 주소, 백업 배열(포인터 배열)의 주소(현재 빈 문자열 들어있음)
{
	int		bytes_read;
	char	*temp_free;

	if (ft_strchr(*buffer_backup, '\n')) //버퍼백업에 널이 있다면 *백업부터 확인하네
		return (extract_line(buffer_backup));
	bytes_read = read_file(fd, buffer, buffer_backup); 
	if ((bytes_read == 0 || bytes_read == -1) && !**buffer_backup) //백업도 없고 파일 다 끝나면 끝
	{
		free_ptr(buffer_backup);
		return (0);
	}
	if (ft_strchr(*buffer_backup, '\n')) //널 있다면 
		return (extract_line(buffer_backup)); //추출하기
	if (!ft_strchr(*buffer_backup, '\n') && **buffer_backup) //널은 없는데 백업에 남은거 있다면
	{
		temp_free = ft_strdup(*buffer_backup); //백업에 있는거 문자열 만들어서
		free_ptr(buffer_backup); //프리해주고 해당 함수 리턴
		return (temp_free);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char		*buffer_backup[OPEN_MAX + 1]; //포인터 배열과 동일
	char			*buffer;
	char			*result;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	if (!buffer_backup[fd])
		buffer_backup[fd] = ft_strdup(""); //처음에 일단 그냥 배열의 포인터 
	result = get_line(fd, &buffer, &buffer_backup[fd]); //한줄 출력
	free_ptr(&buffer); //담아오는 배열 프리
	return (result);
}
