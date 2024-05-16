#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
    Month = 1;
    Day = 1;
    Year = 2024;
}

Date::Date(int month, int day, int year)
{
    if (month > 12 || month < 1)
    {
        month = 1;
    }

    int defaultDay = 1;

    Year = year;

    if (day < 1)
    {
        cout << "Day is less than 1. Using default day. (" << defaultDay << ")" << endl;
        day = defaultDay;
    }



    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        if (day > 31)
        {
            day = defaultDay;
        }
        break;
    }


    case 2:
    {
        if (day > 29)
        {
            day = defaultDay;
        }
        break;
    }

    case 4://april
    case 6://june
    case 9:// september
    case 11:// november
    {
        if (day > 30)
        {
            day = defaultDay;
        }
        break;
    }
    }

    Day = day;
    Month = month;
    Year = year;
}

int Date::getMonth() const
{
    return Month;
}

int Date::getDay() const
{
    return Day;
}

int Date::getYear() const
{
    return Year;
}

void Date::setMonth(int m)
{
    Month = m;
}

void Date::setDay(int dd)
{
    Day = dd;
}

void Date::setYear(int yy)
{
    Year = yy;
}

void Date::print()
{
    int m = getMonth();
    int d = getDay();
    int y = getYear();
    printf("%d/%d/%d\n", m, d, y);
}
