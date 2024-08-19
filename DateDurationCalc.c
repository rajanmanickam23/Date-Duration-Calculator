#include <stdio.h>
#include <stdbool.h>

const char TITLE[] = "Date Duration Calculator";
const char AUTHOR_LINE[] = "By Rajan Manickam";

bool isLeapYear(int year);
int countLeapYears(int day, int month, int year);
int dateToDays(int day, int month, int year);

int main()
{
    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;
    int daysBetween;

    printf("%s\n", TITLE);
    printf("%s\n\n", AUTHOR_LINE);

    printf("Please enter the start date in DD MM YYYY format:\n");
    scanf("%d %d %d", &startDay, &startMonth, &startYear);

    printf("Please enter the end date in DD MM YYYY format:\n");
    scanf("%d %d %d", &endDay, &endMonth, &endYear);

    int startDays = dateToDays(startDay, startMonth, startYear);
    int endDays = dateToDays(endDay, endMonth, endYear);
    daysBetween = endDays - startDays;

    printf("\nThe number of days between %02d/%02d/%04d and %02d/%02d/%04d is: %d days\n",
           startDay, startMonth, startYear, endDay, endMonth, endYear, daysBetween);

    return 0;
}

bool isLeapYear(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int countLeapYears(int day, int month, int year)
{
    if (month <= 2)
    {
        year--;
    }

    return year / 4 - year / 100 + year / 400;
}

int dateToDays(int day, int month, int year)
{
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int days = year * 365 + day;

    for (int i = 0; i < month - 1; i++)
    {
        days += monthDays[i];
    }

    days += countLeapYears(day, month, year);

    if (month > 2 && isLeapYear(year))
    {
        days++;
    }

    return days;
}

/*
  CONSOLE OUTPUT
  Date Duration Calculator
  By Rajan Manickam
 
  Please enter the start date in DD MM YYYY format:
  01 01 2020
 
  Please enter the end date in DD MM YYYY format:
  31 12 2020
 
  The number of days between 01/01/2020 and 31/12/2020 is: 365 days
 */
