#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("text.txt", O_RDONLY);
    printf("Get next line:\n");
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("\n");

	fd = open("textbonus.txt", O_RDONLY);
    printf("Get next line:\n");
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));

	close(fd);
	return (0);
}
