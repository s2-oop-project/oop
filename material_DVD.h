// thisa sub-class is for DVD

#ifndef DVD_H
#define DVD_H
#include"material.h"

using namespace std;

class DVD:public material
{
public:
    DVD();
    void set_length(int Len);
    int get_length();
    
    int length;
};
#endif

