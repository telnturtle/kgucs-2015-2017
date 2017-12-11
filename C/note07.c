// 1번
#include <stdio.h>

int main(void)
{
	int i;

	for(i = 0; i < 10; i++)
		puts("*");

	return 0;
}




// 2번
#include <stdio.h>

int main(void)
{
	int i;

	for(i = 0; i < 10; i++)
		printf("%d\n", i+1);

	return 0;
}




// 3번
#include <stdio.h>

int main(void)
{
	int i;

	for(i = 0; i < 11; i++)
	{
		if(0 == (i)%2) printf("%d\n", i);
	}

	return 0;
}




// 4번 
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;


	for(i = 0; i < 11; i++)
	{	
		sum += i; 
		if(10 - i)	printf("%d + ", i);
		else		printf("%d ", i);
	}

	printf("= %d\n", sum);


	

	return 0;
}




// 5번
#include <stdio.h>

int main(void)
{
	int i;
	//int sum = 0;


	for(i = 0; i < 9; i++)	
		printf("%d * %d = %d\n", 7, (i+1), 7 * (i+1));
	
	return 0;
}		



// 6번
#include <stdio.h>

int main(void)
{
	int i;
	//int sum = 0;


	for(i = 0; i < 9; i++)	
		printf("%d * %d = %d\n", 7, (i+1), 7 * (i+1));
	
	return 0;
}		




// 7번
#include <stdio.h>

int main(void)
{
	int i;
	//int sum = 0;


	for(i = 0; i < 9; i++)	
		printf("%d * %d = %d\n", 7, (i+1), 7 * (i+1));
	
	return 0;
}		




// 8번
#include <stdio.h>

int main(void)
{
	int i, j;


	for(i = 1; i <= 5; i++)
		for(j = 1; j <= 5; j++)
			printf("%d * %d = %d\n", i, j, i*j);

	return 0;
}




// 9번
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;


	for(i = 0; i <= 100; i++)
	{	
		sum += i; 
		if(100 - i)	printf("%d + ", i);
		else		printf("%d ", i);
	}

	printf("= %d\n", sum);

	return 0;
}





//10번
#include <stdio.h>

int main(void)
{
	int i;
	int result = 1;


	for(i = 1; i <= 10; i++)
	{	 
		if(i < 6)	
		{
			if(5 - i)	printf("%d * ", i);
			else		printf("%d + ", i);

			result *= i;
		}

		else
		{
			if(10 - i)	printf("%d + ", i);
			else		printf("%d ", i);

			result += i;
		}
	}

	printf("= %d\n", result);

	return 0;
}




// 11번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("7");
		}
		puts("");
	}

	return 0;
}





// 12번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%2d      ", 10*(i) + (j+1));
		}
		puts("");
		puts("");
	}

	return 0;
}




// 13번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if((i+1) % 2)	printf("%2d      ", 10*(i) + (j+1));

			else			printf("%2d      ", 10*(i) + 10-j);
		}
		puts("");
		puts("");
	}

	return 0;
}




// 14번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if((i+1) % 2)	printf("%2d      ", 10*(i) + (j+1));

			else			printf("%2d      ", 10*(i) + 10-j);
		}
		puts("");
		puts("");
	}

	return 0;
}




// 15번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 10 ; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		puts("");
	}

	return 0;
}




// 16번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 5; i++)
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




// 17번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 5; i++)
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




// 18번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 0 ; i < 5; i++)
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

	for(i = 4 ; i >= 0; i--)
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




// 19번
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(j = 1; j <= 9; j++)
	{
		for(i = 2 ; i < 6; i++)
		{
			printf("%d x %d = %d\t", i, j, i * j);
		}
		puts("");
	}

	return 0;
}




// 20번
#include <stdio.h>
#include <string.h>


int main(void)
{
	int i;

	char a[256];

	printf("문자를 입력하세요 : ");

	scanf("%s", a);

	printf("입력한 문자열 : %s\n\n", a);

	printf("변환된 문자열 : ");
		
	for(i = 0; i <= strlen(a); i++)
		printf("%c", a[strlen(a)-i]);

	puts("");

	return 0;
}
