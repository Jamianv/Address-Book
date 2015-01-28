#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H
#include <string>
#include "personType.h"
#include "dateType.h"
#include "addressType.h"
using namespace std;

class extPersonType
{
    public:
        extPersonType(string first = "", string last = "",
                        int month = 0, int day = 0, int year = 0,
                        string addr = "", string cit = "",string sta = "",
                        int zip = 0, string pType = "", long int phone = 0);
        void setExtPersonType(string first, string last, int month,
                        int day, int year, string addr, string cit,
                        string sta, int zip, string pType, long int phone);
        void printExtPersonType() const;
        void printNames() const;
        string getLastName() const;
        string getType() const;
        int getBday() const;
    private:
        personType name;
        dateType birthday;
        addressType address;
        string type;
        long int phoneNum;
};

#endif
