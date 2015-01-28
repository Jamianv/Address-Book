#include "addressBookType.h"

using namespace std;

addressBookType::addressBookType(){
}

void addressBookType::setInfo(string file){
    string fName, lName;
    int aMonth, aDay, aYear;
    string addr, cit, sta;
    int zip;
    string type;
    long int phone;
    inF.open(file.c_str());
    for(int i = 0; i < MAX_ENTRIES; i++){
        inF >> fName >> lName >> aMonth
        >> aDay >> aYear >> addr >> cit
        >> sta >> zip >> type >> phone;
        addrBook[i].setExtPersonType(fName, lName, aMonth, aDay, aYear,
                                     addr, cit, sta, zip, type, phone);
    }
    inF.close();
}

void addressBookType::printInfo() const{
    for(int i = 0; i < MAX_ENTRIES; i++){
        addrBook[i].printExtPersonType();
        cout << endl;
    }
}

void addressBookType::nameSort(){
    extPersonType temp;
    for(int i = 1; i < MAX_ENTRIES; i++){
        for(int j = 0; j < MAX_ENTRIES-1; j++){
            if(addrBook[j].getLastName() > addrBook[j+1].getLastName()){
                temp = addrBook[j];
                addrBook[j] = addrBook[j+1];
                addrBook[j+1] = temp;
            }
        }
    }
}

extPersonType addressBookType::nameSearch(string choice){
    for (int i = 0; i < MAX_ENTRIES; i++){
        if(addrBook[i].getLastName() == choice){
            return addrBook[i];
        }
    }
}

