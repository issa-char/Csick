#include <stdio.h>

void rev_string(char *s)
{
		int l = sizeof(s);
		int x = 0 + 1;

		for(l; l>x;l--)
		{
				printf("%d\n", l);
				printf((s+l));

		}


}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
