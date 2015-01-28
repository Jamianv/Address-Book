#include <iostream>
#include "dateType.h"
using namespace std;

dateType::dateType(int month, int day, int year){
    setDate(month, day, year);
}

void dateType::setDate(int month, int day, int year){
    if(validDate(month, day, year)){
        dMonth = month;
        dDay = day;
        dYear = year;
    }
    else{
        dMonth = 0;
        dDay = 0;
        dYear = 0;
    }
}

int dateType::getDay() const{
    return dDay;
}

int dateType::getMonth() const{
    return dMonth;
}

int dateType::getYear() const{
    return dYear;
}

void dateType::print() const{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

bool dateType::isLeapYear(int year) const{
    return (!(year%4) && (year % 100) || !(year % 400));
}

bool dateType::validDate(int month, int day, int year) const{
    int monthlen[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(!year || !month || !day || month > 12)
        return 0;
    if(isLeapYear(year) && month == 2)
        monthlen[1]++;
    if(day > monthlen[month-1])
        return 0;
    return 1;
}
