#include <stdio.h>
#include <string.h>

void reset_to_98(int *n);
void swap_int(int *a, int *b);
void _puts(char *str);
int _strlen(char *s);
void print_rev(char *s);


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

void _puts(char *str)
{
		puts(str);
		puts("\n");
}
void print_rev(char *s)
{
		int in = strlen(s);
		int l;

		for (l - 1; l >= 0; in--)
				printf(s[l]);
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


		str = " I do not fear computers. I fear the lack of them - Isaac Asimov";
		_puts(str);

		return(0);
}

