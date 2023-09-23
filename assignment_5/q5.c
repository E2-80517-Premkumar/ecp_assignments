#include<stdio.h>

void accept_array(int [], int);
void print_array(int [], int);
int find_max(int [], int);
int find_min(int [], int);


int main(void)
{
	int arr[20], size;
	printf("Enter the size of the array : ");
	scanf("%d", &size);

	accept_array(arr, size);
	print_array(arr, size);
	printf("\n");
	
	printf("Maximum Element : %d\n", find_max(arr, size));

	printf("Minimum Element : %d\n", find_min(arr, size));

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
		printf("%-4d", arr[i]);
	}
}

int find_max(int arr[], int size)
{
	int max = arr[0];
	for(int i=1; i<size; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}

int find_min(int arr[], int size)
{
	int min = arr[0];
	for(int i=1; i<size; i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}
	return min;
}
