#include<stdio.h>

int main(void)
{
	int day, month, year;
	printf("Enter the date : dd/mm/yy \n");
	scanf("%d %d %d", &day, &month, &year);

	if(month < 3)
	{
		month = month + 12;
		year = year -1;
	}

	int n = (day + (2 * month) + (3 * (month +1) / 5) + year + (year / 4) - (year / 100) + (year / 400) + 2) % 7;

	switch(n)
	{
		case 0:
			printf("The day of week of given date %d-%d-%d is Saturday\n", day, month, year);
			break;

		case 1:
			printf("The day of week of given date %d-%d-%d is Sunday\n", day, month, year);
			break;

		case 2:
			printf("The day of week of given date %d-%d-%d is Monday\n", day, month, year);
			break;

		case 3:
			printf("The day of week of given date %d-%d-%d is Tuesday\n", day, month, year);
			break;

		case 4:
			printf("The day of week of given date %d-%d-%d is Wednesday\n", day, month, year);
			break;

		case 5:
			printf("The day of week of given date %d-%d-%d is Thursday\n", day, month, year);
			break;

		case 6:
			printf("The day of week of given date %d-%d-%d is Friday\n", day, month, year);
			break;
	}

	return 0;
}

