#include <stdio.h>
int main()
{

    unsigned char a, b;
    printf("Enter the two character : ");
    scanf("%c %c", &a, &b);

	printf("Ascii Value of Character's : %d , %d \n",a,b);
   printf("Addition of %c + %c is equal to %d \n", a, b, a + b);
    printf("Subtraction of %c - %c is equal to %d \n", a, b, a - b);
    printf("Multiplication of %c * %c is equal to %d \n", a, b, a * b);
    


  return 0;
}
