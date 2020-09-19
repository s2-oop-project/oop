#include<iostream>
#include"material_book.h"
#include"material.h"

using namespace std;

book::book():material()
{

    page_num=0;
}

void book::set_page_number(int Page){
    page_num=Page;
}
int book::get_page_num(){
    return page_num;
}
