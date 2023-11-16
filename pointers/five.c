#include <stdio.h>

/**
 * modify_var - this function does not modify n
 * @n: a useless variable
 *
 * Return: nothing
 */
void modify_var(int n)
{
		n = 55;

}

/**
 * main - parameter are passed by value
 *
 * Return: Always 0
 */
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

