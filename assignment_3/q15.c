#include<stdio.h>

int main(void)
{
	int num1, num2, choice;
	do
	{

		printf("Enter the two numbers : \n");
		scanf("%d %d", &num1, &num2);

		printf("0.Exit\n");
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");

		printf("Enter your choice : \n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Addition : %d\n", num1 + num2);
				break;

			case 2:
				printf("Subtraction : %d\n", num1 - num2);
				break;

			case 3:
				printf("Multiplication : %d\n", num1 * num2);
				break;

			case 4:
				if(num2 != 0)
					printf("Division : %d\n", num1 / num2);
				else
					printf("Divide by zero error\n");
				break;

		}
	}while(choice != 0);

	return 0;
}

