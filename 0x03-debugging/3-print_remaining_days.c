#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <ctype.h>
/**
 * print_remaining_days - check main
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Description: Program that converts a day to the day of year,
 * And determines how many days are left in a year.
 */
void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month >= 2)
		{
			day++;
		}

		printf("Day of the year : %d\n", day);
			printf("Remaining days : %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/ %02d/ %04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
