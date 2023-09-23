#include<stdio.h>

int addition(int, int, char);
int subtraction(int, int, char);
int multiplication(int, int, char);
int division(int, int, char);

int main(void)
{
	int op1, op2;
	char opr, ch1;
	do
	{
		printf("Enter two operands : ");
		scanf("%d %d", &op1, &op2);

		printf("Enter choice : \n1)+\t2)-\t3)*\t4)/\t5)Exit\n ");
		scanf("%*c%c", &opr);
	
		if(opr == '+')
			printf("Addition : %d\n", addition(op1, op2, opr));
		else if(opr == '-')
			printf("Subtraction : %d\n", subtraction(op1, op2, opr));
		else if(opr == '*')
			printf("Multiplication : %d\n", multiplication(op1, op2, opr));
		else if(opr == '/')
			printf("Division : %d\n", division(op1, op2, opr));
		else
			continue;
	}while(opr == 5);
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

