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

// Approach one

#include <stdio.h>

int main()
{

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

		//


		fclose(fp);


		return 0;
}
