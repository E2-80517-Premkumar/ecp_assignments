#include<stdio.h>

int addition(int *, int *, char *);
int subtraction(int *, int *, char *);
int multiplication(int *, int *, char *);
int division(int *, int *, char *);

int flag = 0;

int main(void)
{
	int op1, op2, sum1, diff1, pro1, div1;
	char opr, ch1;
	do
	{
		printf("Enter two operands : \n");
		scanf("%d %d", &op1, &op2);

		printf("Enter operator : 1)+\t2)-\t3)*\t4)/\t5)exit\n");
		scanf("%*c%c", &opr);

		if(opr == '+')
		{	
			sum1 = addition(&op1, &op2, &opr);
			printf("Addition : %d\n", sum1);
		}
		else if(opr == '-')
		{
			diff1 = subtraction(&op1, &op2, &opr);
			printf("Subtraction : %d\n", diff1);
		}
		else if(opr == '*')
		{
			pro1 = multiplication(&op1, &op2, &opr);
			printf("Multiplication : %d\n", pro1);
		}
		else if(opr == '/')
		{	
			if(flag == 0 && op2 != 0)
			{	
				div1 = division(&op1, &op2, &opr);
				printf("Division : %d\n", div1);
			}
			else
			{
				printf("Divide by zero error\n");
				flag = 1;
				printf("Do you want to continue (y/n): ");
				scanf("%*c%c", &ch1);
			}
		}
		else
			continue;
	}while(ch1 == 5);
	return 0;
}

int addition(int *num1,int *num2, char *ch)
{	
	int sum = *num1 + *num2; 
	return sum;
}

int subtraction(int *num1,int *num2, char *ch)
{
	int diff = *num1 - *num2;
	return diff;
}

int multiplication(int *num1,int *num2, char *ch)
{
	int mult = *num1 * *num2;
	return mult;
}

int division(int *num1, int *num2, char *ch)
{
  	int div = *num1 / *num2;
	return div;
}

/*
else if(opr == '/')
			if(flag == 0 && op2 != 0)
				printf("Division : %d\n", division(op1, op2, opr));
			else
			{
				printf("Divide by zero error\n");
				flag = 1;
				printf("Do you want to continue (y/n) : ");
				scanf("%*c%c", &ch1);
			}
		else
			continue;
	//			printf("Do you want to continue (y/n) : ");
	//			scanf("%*c%c", &ch1);
			
	}while(ch1 != 'n');
	return 0;
}


*/

