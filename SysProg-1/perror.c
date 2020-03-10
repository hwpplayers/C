#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

int main(void)
{
	int fd;

	if ((fd = open("xxxxxx.yyy", O_RDONLY)) == -1) {
		perror("open");
		exit(EXIT_FAILURE);
	}
	printf("Ok\n");

	return 0;
}
