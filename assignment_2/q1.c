#include <stdio.h>

int main()
{
    double a, b, r;

    printf("Enter the number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    else
    {
        r = a / b;
        printf("Result of division (%.2lf / %.2lf): %.2lf\n", a, b, r);
    }

    return 0;
}
