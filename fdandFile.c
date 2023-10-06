/**
 * File Handling in C:
 * A file is a collection of data stored in memory.
 * File handling is how we work with these files (open,read,write and close).
 * Two main approaches: FILE for simplicity and file descriptors for control.
 *
 * Approach 1: Using FILE Data Type <stdio.h>
 * - Simplicity and ease of use
 * - Higher-level functions for reading and writing files
 * - Buffered I/O for efficient operations
 * - <fprintf, fputs,fputc, fwrite>
 * - modes: "w"-write, "r+"-read & write, "a"-append
 *
 * Approach 2: Using File Descriptors
 * - Lower-level control over file operations
 * - Direct system calls like open, read, write, and close
 * - Suitable for specialized tasks and interacting with non-file resources.
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>		// for open(), creat()
#include <unistd.h> 	// for read(), write(), close()

int main()
{
		
		// Approach one
		// declare FILE pointer for file handling
		FILE *fpt;

		// if exist all existing contenti not deleted
		// if not, it's created
		fpt = fopen("mytext.txt", "a");

		// check if file was opened successfully
		if (fpt == NULL)
		{
				printf("error opening the file!");
				return (1);
		}

		char a[] = "write";
		char b[] = "read";
		char c[] = "append";

		fprintf(fpt, "\nhandling files: %s %s % s", a, b, c); // write formatted
															  // data to file
		fputs("\nusing FILE data type\n", fpt); // write string to file
		putc('A', fpt); // write char

		fclose(fpt); // close file when done
		printf("data written successfully");


		// reading file
		// fgets, fgetc,fscanf, fseek, ftell, fread

		FILE *fp;
		fp = fopen("text.txt", "r");
		char buff[100];

		if (fp == NULL)
		{
				printf("error opening file");
				return (1);
		}

		printf("\n%p", fp);

		// reading file line by line
		fgets(buff, sizeof(buff), fp);
		printf("\n%s", buff);

		// read single character from the file
		int cr;

		cr = fgetc(fp);
		printf("%c", cr);

		// read formatted input
		int no;

		fscanf(fp, "%d", &no);
		printf("%d");

		fclose(fp);


		// Approach 2
		// file descriptors
		int fd; // file descriptor
		char buffer[] = "hello world\n";
		ssize_t B_written;
		char buffr[1024];
		ssize_t B_read;
ff 77
		fd = open("exmple.txt", O_RDONLY);	// open for reading
		if (fd == -1)
		{
				perror("error opening file");
				exit(1);
		}

		brd = read(fd, 



		close(fd);

		return 0;
}
