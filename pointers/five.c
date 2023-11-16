#include <stdio.h>

int modify_var(int n)
{
		n = 55;

}

int main(void)
{
		int d;
		int r;

		d = 44;
		r = 88;
		
		printf("the value of d before modify function %d\n", d);
		modify_var(d);

		printf("the value of d %d\n", d);

		return(0);
}

