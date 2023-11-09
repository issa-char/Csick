/**
 * pointers arrays and strings
 * more pointers arrays and strings
 * even more pointers arrays and strings
 * at the end  explain to anyone: what are pointers and how to use them
 *  what are arrays and how to use them
 *  what are the difference btwn pointers and arrays
 *  how to use strings and how to manipulate them
 *  scope of variables
 */
#include <stdio.h>

int main(void)
{
		int n;
		char c;
		float d;

		printf("the size of 'char' on my machine is %lu\n", sizeof(char));
		printf("the size of 'int' on my machine is %lu\n", sizeof(int));
		printf("The size of 'float' on my machine is %lu\n", sizeof(float));
		printf("the size of 'variable n' on my machine is %lu\n", sizeof(n));
		printf("the mem addr of variable n is: %p\n", &n);
		printf("the mem addr of variable c is: %p\n", &c);
		printf("The mem addr of variable d is: %p\n", &d);


		return(0);
}

