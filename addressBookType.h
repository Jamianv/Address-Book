#ifndef ADDRESSBOOKTYPE_Hg
#define ADDRESSBOOKTYPE_H
#include <iostream>
#include <fstream>
#include "extPersonType.h"


class addressBookType: public extPersonType
{
    public:
        addressBookType();
        void setInfo(string);
        void nameSort();
        extPersonType nameSearch(string);
        void printInfo() const;
        void printNames() const;
    private:
        static const int MAX_ENTRIES = 2;
        extPersonType addrBook[MAX_ENTRIES];
        ifstream inF;

};

#endif // ADDRESSBOOKTYPE_H