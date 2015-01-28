#include <iostream>
#include "addressType.h"
using namespace std;

addressType::addressType(string addr, string cit,
                            string sta, int zip){
    setAddressType(addr, cit, sta, zip);
}

void addressType::setAddressType(string addr, string cit,
                            string sta, int zip){
    address = addr;
    city = cit;
    state = sta;
    zipCode = zip;
}

void addressType::getAddressType(string& addr, string& cit,
                            string& sta, int& zip){
    addr = address;
    cit = city;
    sta = state;
    zip = zipCode;
}

void addressType::setAddress(string addr){
    address = addr;
}

string addressType::getAddress() const{
    return address;
}

void addressType::setCity(string cit){
    city = cit;
}

string addressType::getCity() const{
    return city;
}

void addressType::setState(string sta){
    state = sta;
}

string addressType::getState() const{
    return state;
}

void addressType::setZip(int zip){
    zipCode = zip;
}

int addressType::getZip() const{
    return zipCode;
}

void addressType::print() const{
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
    cout << "Zip: " << zipCode << endl;
}
