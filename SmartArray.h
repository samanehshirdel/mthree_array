//
// Created by hello on 2021-02-27.
//

#ifndef SMARTARRAY_SMARTARRAY_H
#define SMARTARRAY_SMARTARRAY_H

#include <vector>

using namespace  std;
class SmartArray {

private:
    int length;
    vector<int> list;

public:

    SmartArray(int length);

    int getLength() const;

    void setLength(int length);

    int& at( int pos);

    SmartArray copy(SmartArray smartArray);


};


#endif //SMARTARRAY_SMARTARRAY_H
