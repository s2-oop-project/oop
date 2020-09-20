//this is the cpp file for material class function:
//    material(abstract)
//    book
//    ebook
//    DVD

#include<iostream>
#include<string>
#include"material.h"

using namespace std;
material::material(){
    material_name="none";
    autor_name="none";
    situation=true;
}

void material::set_up(string Material_name,string Autor_name){
    situation=true;
    material_name=Material_name;
    autor_name=Autor_name;
}
string material::get_material_name(){
    return material_name;
}
string material::get_autor_name(){
    return autor_name;
}
bool material::get_situation(){
    return situation;
}

void material::borrow_material(){
    situation=false;
}
void material::return_material(){
    situation=true;
}


//ebook
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




//book
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


//DVD
DVD::DVD():material()
{
    length=0;
}
void DVD::set_length(int Len){
    length=Len;
}
int DVD::get_length(){
    return length;
}

