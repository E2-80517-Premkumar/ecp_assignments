#include <stdio.h>
int main()
{
    int n, o, r = 0, d;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);
    o = n;
    if (n < 10000 || n > 99999)
    {
        printf("Input is not a 5-digit number.\n");
    }
    else
    {
        while (n != 0)
        {
            d = n % 10;
            r = r * 10 + d;
            n /= 10;
        }
        if (o == r)
        {
            printf("%d is a numeric palindrome.\n", o);
        }
        else
        {
            printf("%d is not a numeric palindrome.\n", o);
        }
    }
    return 0;
}
