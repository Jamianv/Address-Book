#include <iostream>
#include <fstream>
#include "addressType.h"
#include "personType.h"
#include "dateType.h"
#include "extPersonType.h"
#include "addressBookType.h"
using namespace std;


const int MAX_ENTRIES = 500;

int main(){
    addressBookType addrObject;
    string searchV;
    int month;
    addrObject.setInfo("addrData.txt");
    addrObject.nameSort();
    cout << "Please enter your search: ";
    cin >> searchV;
    if(searchV == "bday"){
        cout << "Please enter your month: ";
        cin >> month;
        addrObject.bDaySearch(month);
    }
    else
        addrObject.nameSearch(searchV);

}
