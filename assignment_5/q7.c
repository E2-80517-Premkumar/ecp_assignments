#include<stdio.h>

void accept_array(int [], int);
void print_array(int [], int);
void selection_sort(int [], int);

int main(void)
{
	int arr[20], size;
	printf("Enter the size of the array : ");
	scanf("%d", &size);

	accept_array(arr, size);
	print_array(arr, size);
	printf("\n");

	selection_sort(arr, size);
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
		printf("%-3d", arr[i]);
	}
}

void selection_sort(int arr[], int size)
{
	int temp;
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Sorted Array : "); 
	for(int i=0; i<size; i++)
	{
		printf("%-3d", arr[i]);
	}
}

