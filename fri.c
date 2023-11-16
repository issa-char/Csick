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
		int fd, bytes_written, bytes_read;
		char *filename = "opentxt.txt";
		char *content[40];

		fd = open(filename, O_RDONLY, 0);
		if (fd == -1)
		{
				fd = creat(filename, 0644);
				if (fd == -1)
						printf("couldn't create file");
		}



		printf("%d\n", fd);

		bytes_read = read(fd, content, 20);	

		printf("%s\n", content);
		
		close(fd);

		return(0);
}

