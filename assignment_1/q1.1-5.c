#include <stdio.h>
int main()
{
    unsigned long int a, b;
    printf("Enter the two character : ");
    scanf("%lu %lu", &a, &b);

	
    printf("Addition of %lu + %lu is equal to %lu \n", a, b, a + b);
    printf("Subtraction of %lu - %lu is equal to %lu \n", a, b, a - b);
    printf("Multiplication of %lu * %lu is equal to %lu \n", a, b, a * b);
    return 0;
}

