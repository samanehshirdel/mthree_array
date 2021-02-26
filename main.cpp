//
// Created by hello on 2021-02-27.
//

#include <iostream>
#include "SmartArray.h"


using namespace std;

int main(){
    SmartArray sa = SmartArray(5);
    sa.at(0) = 2;
    cout << sa.at(0) << endl;

    SmartArray sa2 = sa.copy(sa);
    cout << sa2.at(0) << endl;
    sa.at(0) = 555;
    cout << sa.at(0) << endl;
    cout << sa2.at(0) << endl;
    cout <<"sa memory address: " << &sa << endl;
    cout <<"sa2 memory address: " << &sa2 << endl;
    return 0;
}
