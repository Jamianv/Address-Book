#include <iostream>
#include "extPersonType.h"
using namespace std;

extPersonType::extPersonType(string first, string last,
                            int month, int day, int year,
                            string addr, string cit,
                            string sta, int zip, string pType,
                            long int phone)
        : name(first, last), birthday(month, day, year),
        address(addr, cit, sta, zip){
        type = pType;
        phoneNum = phone;
}

void extPersonType::setExtPersonType(string first, string last,
                                    int month, int day, int year,
                                    string addr, string cit,
                                    string sta, int zip, string pType,
                                    long int phone){
        name.setName(first, last);
        birthday.setDate(month, day, year);
        address.setAddressType(addr, cit, sta, zip);
        type = pType;
        phoneNum = phone;
}

void extPersonType::printExtPersonType() const{
    cout << "Name: ";
    name.print();
    cout << endl << "Birthdate: ";
    birthday.print();
    cout << endl;
    address.print();
    cout << "Type: " << type << endl;
    cout << "Phone #: " << phoneNum;
}

void extPersonType::printNames() const{
    name.print();
}

string extPersonType::getLastName() const{
    return name.getLastName();
}

int extPersonType::getBday() const{
    return birthday.getMonth();
}

string extPersonType::getType() const{
    return type;
}

