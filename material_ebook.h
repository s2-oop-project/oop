// this sub-class is for ebook
#ifndef EBOOK_H
#define EBOOK_H
#include"material.h"

using namespace std;

class Ebook:public material
{
public:
    Ebook();
    void set_page_number(int Page);
    void download();
    int get_page_num();
    int get_download_count();
    
    
    int page_num;
    int download_count;
};
#endif
