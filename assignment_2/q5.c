#include <stdio.h>

int main()
{
    double num1, num2, num3, max;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    scanf("%lf", &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    // ternary operator nested
    // max = (num1 >= num2 && num1 >= num3) ? num1 : ((num2 >= num1 && num2 >= num3) ? num2 : num3);
    printf("The maximum number is: %.2lf\n", max);

    return 0;
}
