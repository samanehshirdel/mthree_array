//
// Created by hello on 2021-02-27.
//

#include "SmartArray.h"
#include  <string>


int SmartArray::getLength() const {
    return length;
}

void SmartArray::setLength(int len) {
    SmartArray::length = len;
}

SmartArray::SmartArray(int length) {
    for(int i=0; i < length;i++)
    {
        list.push_back(0);
    }
}

int &SmartArray::at(int pos) {
    if(pos > length || pos <0){
        throw "not valid index";
    }
    return list.at(pos);
}

SmartArray SmartArray::copy(SmartArray smartArray) {


    return smartArray;
}




