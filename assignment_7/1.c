#include<stdio.h>

void accept_data(int arr[3][4], int row, int col);
void display_data(int arr[3][4], int row, int col);

int main(void)
{
	int arr[3][4];

	accept_data(arr, 3, 4);
	
	display_data(arr, 3, 4);

	return 0;
}

void accept_data(int arr[3][4], int row, int col)
{
	printf("Enter the array elements : \n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

void display_data(int arr[3][4], int row, int col)
{
	printf("Display array : \n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
}

