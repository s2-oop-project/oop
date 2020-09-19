#include<iostream>
#include"material_ebook.h"
#include"material.h"

using namespace std;

Ebook::Ebook():material()
{

    page_num=0;
    download_count=0;
}

void Ebook::download(){
    download_count+=1;
}

void Ebook::set_page_number(int Page){
    page_num=Page;
}
int Ebook::get_page_num(){
    return page_num;
}

int Ebook::get_download_count(){
    return download_count;
}
