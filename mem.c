#include <stdio.h>
#include <stdlib.h>

int main(void)
{
		int c;
		char *t;

		c = 5;
		t = malloc(c * sizeof(char));
		t[0] = 'y';
		t[1] = 'o';
		t[2] = 'o';
		t[3] = 'w';
		

		printf("%s\n", t);
		printf("%d\n", sizeof(t));
		printf("%d\n",sizeof("yoow"));

}


