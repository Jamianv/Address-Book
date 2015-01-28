#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>
using namespace std;

class personType
{
    public:
        personType(string first = "", string last = "");
        void print() const;
        void setName(string first, string last);
        string getFirstName() const;
        string getLastName() const;
    private:
        string firstName;
        string lastName;
};

#endif
