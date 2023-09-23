#include<stdio.h>

void accept(int[], int);
void display(int[], int);
int unique(int[],int );

int main()

{
	int size = 5;
	int marks[5];
	accept(marks, size);
	display(marks, size);
	int i = unique(marks, size);
	printf("%d", i);
	display(marks,size);
}


void accept(int marks[], int size)
{
	printf("Enter array elements:\n");
	for(int i=0; i <= size-1; i++)
		{	
			printf("arr[%d] = ", i);
			scanf("%d", &marks[i]);
		}
}

void display(int marks[], int size)
{
	printf("Array elemets are:\n");
	for(int i=0; i<size ; i++)
		{
			printf("arr[%d] = %d\n",i, marks[i]);
		}
}

int unique(int arr[], int size)
{
	int i=0;
	int count =0;
			for(int j=0; j<size; j++)
				{
					if (arr[i] == arr[j+1])
						{
							//arr[i] = arr[j];
							count = count + 1;
							//break;
						}
				}
				i++;
		return count;	
}
