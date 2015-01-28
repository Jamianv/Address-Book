#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H
#include <string>
using namespace std;

class addressType
{
    public:
        addressType(string = "", string = "", string = "", int = 0);
        void setAddressType(string, string, string, int);
        void getAddressType(string&, string&, string&, int&);
        void setAddress(string);
        string getAddress() const;
        void setCity(string);
        string getCity() const;
        void setState(string);
        string getState() const;
        void setZip(int);
        int getZip() const;
        void print() const;
    private:
        string address;
        string city;
        string state;
        int zipCode;
};

#endif
