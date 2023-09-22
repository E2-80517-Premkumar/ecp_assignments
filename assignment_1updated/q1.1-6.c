   #include <stdio.h>
   int main()
   {
       signed long int a, b;
       printf("Enter the two character : ");
       scanf("%ld %ld", &a, &b);
   
   
       printf("Addition of %ld + %ld is equal to %ld \n", a, b, a + b);
      printf("Subtraction of %ld - %ld is equal to %ld \n", a, b, a - b);
      printf("Multiplication of %ld * %ld is equal to %ld \n", a, b, a * b);
      return 0;
  }
 
