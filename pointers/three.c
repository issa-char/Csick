#include <stdio.h>

int main(void)
{
		int *ptr;
		int c;

		ptr = &c;

		printf("the memory address of variable c is %p\n", &c);
		printf("the memory address of pointer ptr is %p\n", &ptr);
		printf("the value stored in pointer ptr is %p\n", ptr);


		return(0);
}

