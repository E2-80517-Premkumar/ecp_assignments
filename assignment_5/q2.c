#include<stdio.h>

void accept_array(int [], int);
void print_array(int [], int);

int main(void)
{
	int arr[20], size;
	printf("Enter the size of the array : \n");
	scanf("%d", &size);

	accept_array(arr, size);
	print_array(arr, size);
	
	printf("\n");

	return 0;
}

void accept_array(int arr[], int size)
{
	printf("Array Elements : \n");
	for(int i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}	

}

void print_array(int arr[], int size)
{
	printf("Array : \n");
	for(int i=0; i<size; i++)
	{
		printf("%-3d", arr[i]);
	}
}



