#include <stdio.h>


int main(void)
{
		char name[10];
		int scores[20];
		float average[10];
		int *p;
		int c;
		char sname[10] = "morghan";
		char cry[10];

		cry[1] = 'l';
		cry[0] = 'g';
		*(cry + 2) = 'y';

		printf("%c\n", *(cry + 2));
		
		printf("value of morghan: is : %p\n", "morghan");
		printf("mem add of sname is: %p\n", sname);
		printf("%s, is the value in mame\n", sname);
		printf("%c, is 2 element in sname\n", sname[1]);
		printf("%c, this is also an alternative\n", *(sname + 1));
		p = &c;
		printf("addr stored in p is: %p\n", p);
		printf("p plus 4 is: %p\n", (p + 4));
		printf("p add plus 1: %p\n", (p + 1));


		printf("the size of this array is %lu\n", sizeof(name));
		printf("the size of scores array is %Lu\n", sizeof(scores));
		printf("the size of average array is %lu\n", sizeof(average));
		// above gives the size of the array object as a whole
		printf("the size of name is %lu\n", sizeof(&name));
		// this gives the size of the first element in the array, which is an array
		
		scores[0] = 0;
		scores[1] = 1;
		scores[2] = 2;
		scores[3] = 3;
		scores[4] = 4;

		// various ways to access array elements
		printf("first element using indexing: %d\n", scores[0]);
		printf("first element using pointer arithmetic: %d\n", *(scores + 0));
		printf("first element %d\n", *scores);

		return(0);
}

