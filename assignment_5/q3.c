#include<stdio.h>

void accept_array(int [], int);
void print_array(int [], int);
void reversed_array(int [], int);

int main(void)
{
	int arr[20], size;
	printf("Enter the size of the array : ");
	scanf("%d", &size);

	accept_array(arr, size);
	print_array(arr, size);
	printf("\n");
	reversed_array(arr, size);
	printf("\n");

	return 0;
}

void accept_array(int arr[], int size)
{
	printf("Array Elements : ");
	for(int i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}

}

void print_array(int arr[], int size)
{
	printf("Array : ");
	for(int i=0; i<size; i++)
	{
		printf("%-2d", arr[i]);
	}
}

void reversed_array(int arr[], int size)
{	
	int temp;
	for(int i=0; i<size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;
	}
	printf("Reversed Array : ");
	for(int i=0; i<size; i++)
	{
		printf("%-2d", arr[i]);
	}
}

