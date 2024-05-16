#pragma once

class Date
{
private:
    int Month;
    int Day;
    int Year;
public:

    Date();
    Date(int month, int day, int year);

    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void setMonth(int m);
    void setDay(int dd);
    void setYear(int yy);
    void print();
};
