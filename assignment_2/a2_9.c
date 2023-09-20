#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    printf("Enter a year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
    } else {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            days = 30;
        } else {
            days = 31;
        }

        printf("Number of days in month %d of year %d: %d\n", month, year, days);
    }

    return 0;
}
