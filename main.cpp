#include <iostream>
#include <fstream>
#include "addressType.h"
#include "personType.h"
#include "dateType.h"
#include "extPersonType.h"
#include "addressBookType.h"
using namespace std;

int main(){
    addressBookType addrObject;
    addrObject.setInfo("addrData.txt");
    addrObject.nameSort();
    addrObject.printInfo();
}
