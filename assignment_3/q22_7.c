#include<stdio.h>

int main(void)
{
	for(int i=0; i<4; i++)
	{
		for(int j=i; j<4; j++)
		{
			printf(" %c", 'A'+j);
		}
		printf("\n");
	}

	return 0;
}

