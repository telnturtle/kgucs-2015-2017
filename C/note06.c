#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 5; i--)
	{
		for (j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < i; j++)
		{
			printf("*");
		}

		printf("*");

		for (j = 0; j < i; j++)
		{
			printf("*");
		}

		puts("");
	}

	return 0;
}
