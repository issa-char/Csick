#include <stdio.h>

/**
 * modify_var - this function does not modify n
 * @n: a variable to change 
 *
 * Return: nothing
 */
void modify_var(int *n)
{
		*n = 55;

}

/**
 * main - parameter passed by a pointer 
 *
 * Return: Always 0
 */
int main(void)
{
		int d;
		int *pt;
		int r;

		d = 44;
		r = 88;
		pt = &d;
		
		printf("the value of d before modify function %d\n", d);
		modify_var(pt);

		printf("the value of d %d\n", d);

		return(0);
}

