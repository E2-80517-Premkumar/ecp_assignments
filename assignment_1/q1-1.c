#include <stdio.h>
int main()
{
    unsigned int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition of %d + %d is equal to %d \n", a, b, a + b);
    printf("Subtraction of %d - %d is equal to %d \n", a, b, a - b);
    printf("Multiplication of %d * %d is equal to %d \n", a, b, a * b);
    return 0;
}