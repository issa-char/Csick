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

		char text[30] = "reading and writting";

		fd = open(filename, O_RDONLY, 0);
		if (fd == -1)
		{
				fd = creat(filename, 0644);
				if (fd == -1)
						printf("couldn't create file");
		}



		printf("%d\n", fd);

		bytes_read = read(fd, content, 30);	
		if (bytes_read == -1)
				printf("error reading from file");

		printf("%s\n", content);

		bytes_written = write(fd, text, 10);
		if(bytes_written = -1)
				printf("error occured while writing to file");

		printf("%d\n", bytes_written);
		
		close(fd);

		return(0);
}

