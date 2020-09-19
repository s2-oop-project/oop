// this sub_class is for book

#ifndef BOOK_H
#define BOOK_H
#include"material.h"

using namespace std;

class book:public material
{
public:
    book();
    void set_page_number(int Page);
    int get_page_num();
    
    int page_num;
};
#endif
