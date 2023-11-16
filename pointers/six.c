#include <stdio.h>

int main(void)
{
		int arr[10];

		arr[1] = 44;
		arr[2] = 55;
		arr[6] = 88;
		arr[3] = 99;
		arr[0] = 29;

		printf("the value at element 1 is %d\n", arr[0]);
		printf("The value at element 2 is %d\n", arr[1]);
		printf("The memory add of element 1 is %p\n", &arr[0]);
		printf("the memory add of element 4 is %p\n", &arr[3]);

		return(0);

}


