#ifndef DATETYPE_H
#define DATETYPE_H


class dateType
{
    public:
        void setDate(int, int, int);
        int getDay() const;
        int getMonth() const;
        int getYear()const;
        void print() const;
        dateType(int month = 1, int day = 1, int year = 1900);
    private:
        bool isLeapYear(int) const;
        bool validDate(int, int, int) const;
        int dMonth;
        int dDay;
        int dYear;
};

#endif // DATETYPE_H
