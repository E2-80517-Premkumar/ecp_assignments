#include<stdio.h>

int main(void)
{
	int month, year;
	do
	{	
		printf("Enter a year : ");
		scanf("%d", &year);

		printf("0.Exit\n");
		printf("1.January\n");
		printf("2.February\n");
		printf("3.March\n");
		printf("4.April\n");
		printf("5.May\n");
		printf("6.June\n");
		printf("7.July\n");
		printf("8.August\n");
		printf("9.September\n");
		printf("10.October\n");
		printf("11.November\n");
		printf("12.December\n");
		printf("Enter a month : ");
		scanf("%d", &month);

		if(month == 0)
			continue;

		switch(month)
		{
			case 1:
				printf("Year : %d and entered month has 31 days\n", year);
				break;

			case 2:
				if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
					printf("Year : %d and entered month has 29 days\n", year);
				else
					printf("Year : %d and entered month has 28 days\n", year);
				break;

			case 3:
				printf("Year : %d and entered month has 31 days\n", year);
				break;

			case 4:
				printf("Year : %d and entered month has 30 days\n", year);
				break;

			case 5:
				printf("Year : %d and entered month has 31 days\n", year);
				break;

			case 6:
				printf("Year : %d and entered month has 30 days\n", year);
				break;

			case 7:
				printf("Year : %d and entered month has 31 days\n", year);
				break;

			case 8:
				printf("Year : %d and entered month has 31 days\n", year);
				break;

			case 9:
				printf("Year : %d and entered month has 30 days\n", year);
				break;

			case 10:
				printf("Year : %d and entered month has 31 days\n", year);
				break;

			case 11:
				printf("Year : %d and entered month has 30 days\n", year);
				break;

			case 12:
				printf("Year : %d and entered month has 31 days\n", year);
				break;
			}
		}while(month != 0);
	return 0;
}

