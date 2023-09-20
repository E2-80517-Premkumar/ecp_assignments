#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap year: 366 days\n");
            }
            else
            {
                printf("Non-leap year: 365 days\n");
            }
        }
        else
        {
            printf("Leap year: 366 days\n");
        }
    }
    else
    {
        printf("Non-leap year: 365 days\n");
    }
    // using logical operators
    // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    // {
    //     printf("Leap year: 366 days\n");
    // }
    // else
    // {
    //     printf("Non-leap year: 365 days\n");
    // }

    // using conditional operators
    // nt days = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 366 : 365;
    // printf("Year %d has %d days.\n", year, days);
    return 0;
}
