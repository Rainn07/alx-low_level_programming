#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints the days left in the year. (leap year accounted for)
 * @month: month in number
 * @day: day of the month
 * @year: year
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int day_of_year = 0;
	int remaining_days = 0;
	int days_in_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	if ((year % 400 ==0) || (year %4 == 0 && year % 100 !=0))
	{
		days_in_month[1] = 29;

		if (month >= 3 && day >= 60)
		{
			day++;
		}

	}
	for (int i = 0; i < month -1; i++)
	{
		day_of_year += days_in_month[i];
	}
	day_of_the_year += day;
	remaining_days = 365 - day_of_year;
	printf("Day of the year: %d\n", day_of_the_year);
	printf("Remaining days: %d\n", remaining_days);
}
	

