#include <stdio.h>

int main(void)
{
		char arr[20];
		int *ptr;

		printf("the size of char in memory is %luB\n", sizeof(char));
		printf("the size of int in memory is %luB\n", sizeof(int));
		printf("the size of float in memory is %luB\n", sizeof(float));
		printf("the size of double in memory is %luB\n", sizeof(double));
		printf("the size of array in memory is %luB\n", sizeof(&arr));
		printf("the size of a pointer variable in memory is %lu\n", sizeof(ptr));
		return(0);
}

