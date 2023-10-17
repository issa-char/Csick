#include <stdio.h>

int main(void)
{
		printf("i use c for low level programming\n");
		printf("basics: semicolon, functions, variables, comments, header files ...\n");

		float weight = 44.33;
		char name[] = "John Wu";
		int result = 300; 
		int light = 3E8;

		printf("the student performed poorly, his total score was %d\n", result);
		printf("%s, what do you think of the C?\n", name);
		printf("the sum of %d and %d is %d\n", 23, 45, (23 + 45));

		printf("The memory address/pointer of result and weight are: %p,%p\n", result, weight);
		puts("memory address are represented as hexadecimal values\n");
		
		printf("the speed of light is %dm/s\n", light);

		int i = 22;
		int j = 48;
		int c = 98;
		int sum = c + j +i;
		printf("he sum of the three is %d", sum);
		printf("%d\n", (c / i));
		printf("%d\n", c % i);

		int d = i * j--;
		printf("%d", d);

		if (i >= c)
		{
				printf("i is gt or equal to c");
		}
		else
				printf("c is greater than \n");


		int a;
		int n;
		printf("enter a value\n");
		scanf("%d", &a);

		printf("enter an no. from 1 - 7\n");
		scanf("%d", &n);
		
		if( n == 1)
				printf("the day of the week is Monday");
		else if (n == 2)
				printf("the day of the week is Tuesday");
		else if (n == 3)
				printf("the day of the week is Wednesday");
		else if (n == 4)
				printf("the day of the week is Thursday");
		else if (n == 5)
				printf("the day of the week is Friday");
		else if (n == 6)
				printf("The day of the week is Saturday");
		else if (n == 7)
				printf("the day of the week is Sunday");
		else
				printf("kindly enter the appropriate value");


		int e = 0;
		sum =0;
		int su(void)
		{
		for (e; e++; e==2)
		{
				int d;
				printf("enter a number\n");
				scanf("%d", &d);
				sum += d;
				printf("The sum is %d\n", sum);
		}
		}

		su();
		printf("return the reslut");



		return 0;
}


