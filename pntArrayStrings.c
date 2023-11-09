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

int mmodify_par(int *m)
{
		printf("value of m is %p\n", m);
		printf("value pointed to %d\n", *m);
		printf("add of m in mem %p\n", &m);
		*m = 402;

		printf("%d\n", *m);
}

void modify_char(char *i, char ff)
{
		printf("value of pointer i is %c\n", *i);
		printf("value of char ff is %c\n", ff);
		*i = 'o';
		ff = 'h';
}

int main(void)
{
		int n;
		char c;
		float d;
		int *z;
		int *e = &n;
		int t = 30;
		int *v = &t;
		int x = 55;
		char ty = 't';
		char *re = &ty;


		printf("the size of 'char' on my machine is %luB\n", sizeof(char));
		printf("the size of 'int' on my machine is %luB\n", sizeof(int));
		printf("The size of 'float' on my machine is %luB\n", sizeof(float));
		printf("the size of 'variable n' on my machine is %luB\n", sizeof(n));
		printf("the size of 'pointer z' on my machine is %luB\n", sizeof(z));
		printf("the mem addr of variable n is: %p\n", &n);
		printf("the mem addr of variable c is: %p\n", &c);
		printf("The mem addr of variable d is: %p\n", &d);
		printf("the mem addr of pointer variable is %p\n", &z);
		printf("the size of pointer e is %luB\n", sizeof(e));
		printf("the mem add of e is %p\n", &e);
		printf("The value of e is %p\n", e);
		printf("the mem add of n stored in pointer e is %p\n", &n);

		printf("the mem add of t is %lu\n", &t);
		printf("The value of t is: %d\n", t);
		printf("the value of pointer v is %lu\n", v);

		*v = 888;
		printf("the new value of t is %d\n", t);

		mmodify_par(v);
		printf("value t now is: %d\n", t);

		modify_char(re, ty);
		printf("the new value of ty is: %c\n", ty);

		

		return(0);
}

