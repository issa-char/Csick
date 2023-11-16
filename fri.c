#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - demonstrating low level file I0
 * 
 * Return: 0
 */
int main(void)
{
		int fd;
		char *filename = "open.txt";

		fd = open(filename, O_RDONLY, 0);

		printf("%d\n", fd);


		
		close(fd);

		return(0);
}

