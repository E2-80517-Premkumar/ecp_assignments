#include<stdio.h>

int main(void)
{
	int i, j, num, a=0,count=0;
	printf("Prime numbers after : \n");
  	scanf("%d", &num);
    
	for(i=num+1; count<6; i++)
	{
		a=0;
		for(j=1; j<=i; j++)
		{ 
			if(i % j == 0)
				a=a+1;
		}
		if(a == 2)
		{
		  count++;
			printf("%-4d", i);
			break;
		}	
		printf("\n");
	}
	

	return 0;
}

