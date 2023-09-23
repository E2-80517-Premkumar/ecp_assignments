#include<stdio.h>

void accept_array(int [], int);
void print_array(int [], int);
int *linear_search(int [], int, int);

int main(void)
{
	int arr[20], size, num;

	printf("Enter the size of the array : ");
	scanf("%d", &size);

	accept_array(arr, size);
	print_array(arr, size);
	printf("\n");

	printf("Enter a number want to search : ");
	scanf("%d", &num);

	int *result = linear_search(arr, size, num);
	if(result != NULL)
		printf("Element %d found at address %u\n", num, result);
	else
		printf("Element %d not found in the array\n", num);

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
		printf("%-3d", arr[i]);
	}
}

int *linear_search(int arr[], int size, int target)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i] == target)
			return &arr[i];
	}
	return NULL;
}


