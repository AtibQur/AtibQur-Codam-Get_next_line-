#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFERSIZE 42
# include <fcntl.h> 
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*get_string_line(char *string);
char	*ft_read_lines(int fd, char *buffer);
char	*ft_find_char(char *string, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_rewrite_string(char *string);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dest, const void *src, size_t num);
size_t	ft_strlen(const char *str);

#endif
