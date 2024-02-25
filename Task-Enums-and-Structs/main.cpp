#include <iostream>

enum class Month : unsigned int
{
    Januaryi = 1,
    Feburary,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

struct Date
{
    unsigned int year;
    Month month;
    unsigned int day;
};

std::ostream& operator<<(std::ostream& stream, const Date& date) noexcept
{
    stream << date.year << '/' << (unsigned int)date.month << '/' << date.day;
    return stream;
}

int main()
{
    Date date;
    date.day = 30;
    date.year = 2014;
    date.month = Month::December;
    std::cout << date << std::endl;
    return 0;
}
