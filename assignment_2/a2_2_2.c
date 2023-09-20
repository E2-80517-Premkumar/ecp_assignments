#include <stdio.h>

double addition(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
}

int main()
{
    double num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, addition(num1, num2));
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtraction(num1, num2));
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiplication(num1, num2));
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, division(num1, num2));
        break;
    default:
        printf("Invalid operator entered.\n");
    }

    return 0;
}
