#include <stdio.h>

int main(void)
{
		char arr[20];

		printf("the size of char in memory is %luB\n", sizeof(char));
		printf("the size of int in memory is %luB\n", sizeof(int));
		printf("the size of float in memory is %luB\n", sizeof(float));
		printf("the size of double in memory is %luB\n", sizeof(double));
		printf("the size of arra in memory is %luB\n", sizeof(&arr));

		return(0);
}

