#include<stdio.h>

int main(void)
{
	int num1, num2;
	char ch;
	printf("Enter the two numbers : ");
	scanf("%d %d", &num1, &num2);

	printf("Enter your Choice : +,-,*,/ ");
	scanf("%*c%c", &ch);

	switch(ch)
	{
		case '+':
			printf("Addition : %d\n", num1 + num2);
			break;

		case '-':
			printf("Subtraction : %d\n", num1 - num2);
			break;

		case '*':
			printf("Multiplication : %d\n", num1 * num2);
			break;

		case '/':
			if(num2 != 0)
				printf("Division : %d\n", num1 / num2);
			else
			{
				printf("Divide by zero error\n");
				goto L1;
			}
			break;
		}
L1:
	return 0;
}

