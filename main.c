#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*s = "a";
	
	fd = open("main.c", O_RDONLY);
	// while (s)
	// {
	// 	s = get_next_line(fd);
	// 	printf("%s", s);
	// 	free (s);
	// }
	s = get_next_line(fd);
	printf("%s", s);
	free (s);
	s = get_next_line(0);
	printf("%s", s);
	free (s);
	s = get_next_line(fd);
	printf("%s", s);
	free (s);
	s = get_next_line(0);
	printf("%s", s);
	free (s);
	
    // //printf("Get next line:\n");
	// printf("%s", get_next_line(fd));
	// printf("%s\n", get_next_line(0));
	// printf("%s", get_next_line(fd));
	// // printf("\n");

	// // fd = open("textbonus.txt", O_RDONLY);
    // // printf("Get next line Bonus:\n");
	// printf("%s", get_next_line(0));
	// // printf("%s", get_next_line(fd));
	// // printf("%s", get_next_line(fd));
	system("leaks a.out");
	close(fd);
	return (0);
}
