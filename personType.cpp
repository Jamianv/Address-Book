#include <iostream>
#include "personType.h"

personType::personType(string first, string last){
    setName(first, last);
}

void personType::print() const{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last){
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const{
    return firstName;
}

string personType::getLastName() const{
    return lastName;
}

