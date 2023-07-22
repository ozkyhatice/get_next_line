#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_getafter(char *stash);
char	*ft_getbefore(char *stash);
char	*ft_joinfunc(char *stash, char *buff, int fd);

#endif
