#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if (num1 > num2) {
        printf("The maximum number is: %.2lf\n", num1);
    } else {
        printf("The maximum number is: %.2lf\n", num2);
    }
    // using ternary operator
    // max = (num1 > num2) ? num1 : num2;
    // printf("The maximum number is: %.2lf\n", max);
    return 0;
}

