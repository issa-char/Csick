#include <stdio.h>

int main(void)
{
		int d, *fe, e;

		d = 88;
		fe = &d;
		printf("the value of variable d before below line executed %d\n", d);
		printf("the addr of variable d is %p\n", fe);

		*fe = 99;
		printf("the new value at d is %d\n", d);

		return(0);
}

