# Date Duration Calculator

This C program calculates the number of days between two dates provided by the user. It performs validation checks for the input dates and accounts for leap years.

## Table of Contents

- [Features](#features)
- [Code Overview](#code-overview)
- [Sample Output](#sample-output)

## Features

- Calculates the number of days between two dates.
- Validates user input for correct date format.
- Handles leap years and different month lengths.
- Simple and intuitive console-based interface.

## Code Overview

The program consists of several key functions:

- `isLeapYear(int year)`: Checks if a given year is a leap year.
- `getMonthDays(int month, int year)`: Returns the number of days in a given month, accounting for leap years.
- `calculateDateDifference(int startMonth, int startDay, int startYear, int endMonth, int endDay, int endYear)`: Calculates the total number of days between two dates.

## Sample Output

  Date Duration Calculator
  By Rajan Manickam
 
  Please enter the start date in DD MM YYYY format:
  01 01 2020
 
  Please enter the end date in DD MM YYYY format:
  31 12 2020
 
  The number of days between 01/01/2020 and 31/12/2020 is: 365 days
## Demo

![Watch the video](https://github.com/yourusername/your-repository/blob/main/demo.mp4)

Click the link above to watch the demo video.

