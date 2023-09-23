#include<stdio.h>

int addition(int, int, char);
int subtraction(int, int, char);
int multiplication(int, int, char);
int division(int, int, char);

int flag = 0;

int main(void)
{
	int op1, op2;
	char opr, ch1;
	do
	{
		printf("Enter two operands : ");
		scanf("%d %d", &op1, &op2);

		printf("Enter operator : \n1)+\t2)-\t3)*\t4)/\n");
		scanf("%*c%c", &opr);
	
		if(opr == '+')
			printf("Addition : %d\n", addition(op1, op2, opr));
		else if(opr == '-')
			printf("Subtraction : %d\n", subtraction(op1, op2, opr));
		else if(opr == '*')
			printf("Multiplication : %d\n", multiplication(op1, op2, opr));
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
				printf("Do you want to continue (y/n) : ");
				scanf("%*c%c", &ch1);
			
	}while(ch1 != 'n');
	return 0;
}

int addition(int num1,int num2, char ch)
{
		return num1 + num2;
}

int subtraction(int num1,int num2, char ch)
{
		return num1 - num2;
}

int multiplication(int num1,int num2, char ch)
{
		return num1 * num2;
}

int division(int num1,int num2, char ch)
{
		return num1 / num2;
}


