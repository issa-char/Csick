#include <stdio.h>
#include <string.h>

void reset_to_98(int *n);
void swap_int(int *a, int *b);

void reset_to_98(int *n)
{
		*n = 98;

}

void swap_int(int *a, int *b)
{
		// a =42 b =98
		int d;
		d = *a;
		*a = *b;
		*b = d;
}

int _strlen(char *s)
{
		return strlen(s);
}

int main(void)
{
		int n;
		int a;
		int b;
		
		a = 98;
		b = 42;

		n = 402;
		printf("n=%d\n", n);
		reset_to_98(&n);
		printf("n=%d\n", n);
		printf("a=%d, b=%d\n", a, b);
		swap_int(&a, &b);
		printf("a=%d, b=%d\n", a, b);
		
		char *str;
		int len;
		
		str = "my first strlen!";
		len = _strlen(str);
		printf("%d\n", len);

		return(0);
}

