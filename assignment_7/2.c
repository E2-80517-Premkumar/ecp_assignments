#include<stdio.h>

void addition(int arr1[3][3], int arr2[3][3], int row, int col);
void subtraction(int arr1[3][3], int arr2[3][3], int row, int col);
void multiplication(int arr1[3][3], int arr2[3][3], int mul[3][3], int row, int col);

int main(void)
{
	int arr1[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
	int arr2[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
	int mul[3][3];
	printf("Display Array1 : \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%-4d", arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("Display Array2 : \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%-4d", arr2[i][j]);
		}
		printf("\n");
	}

	addition(arr1, arr2, 3, 3);
	printf("\n");
	subtraction(arr1, arr2, 3, 3);
	printf("\n");
	multiplication(arr1, arr2, mul, 3, 3);

	return 0;
}

void addition(int arr1[3][3], int arr2[3][3], int row, int col)
{

	printf("Addition of arr1 and arr2 : \n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%-4d", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
}

void subtraction(int arr1[3][3], int arr2[3][3], int row, int col)
{

	printf("Subtraction of arr1 and arr2 : \n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%-4d", arr1[i][j] - arr2[i][j]);
		}
		printf("\n");
	}
}

void multiplication(int arr1[3][3], int arr2[3][3], int mul[3][3], int row, int col)
{
	int i, j, k;

	printf("Multiplication of arr1 and arr2 : \n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			mul[i][j] = 0;
			for(int k=0; k<3; k++)
			{
				mul[i][j] += arr1[i][k] * arr2[k][j];
			}
			printf("%-4d", mul[i][j]);
		}
		printf("\n");
	}
}




