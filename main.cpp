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
    cout << sa.at(0) << endl;

    return 0;
}
