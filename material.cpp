//this is the cpp file for material class function:
//    material(abstract)
//    book
//    ebook
//    DVD

#include<iostream>
#include<string>
#include"material.h"
#include<vector>

using namespace std;
material::material(){
    material_name="none";
    author_name="none";
    situation=true;
}

void material::set_up(string Material_name,string Author_name){
    situation=true;
    material_name=Material_name;
    author_name=Author_name;
}
string material::get_material_name(){
    return material_name;
}
string material::get_author_name(){
    return author_name;
}
bool material::get_situation(){
    return situation;
}
void material::borrow_material(string borrow_user){
    situation=false;
    borrow_user_list.push_back(borrow_user);
    
}
void material::return_material(){
    situation=true;
}

vector<string> material::get_borrow_user_list(){
    return borrow_user_list;
}




//ebook
Ebook::Ebook():material()
{

    page_num=0;
    download_count=0;
}

void Ebook::set_page_number(int Page){
    page_num=Page;
}
int Ebook::get_page_num(){
    return page_num;
}
void Ebook::borrow_material(string borrow_user){
    download_count+=1;
}
int Ebook::get_download_count(){
    return download_count;
}




//book
book::book():material()
{

    page_num=0;
}
void book::borrow_material(string borrow_user){
    situation=false;
    borrow_user_list.push_back(borrow_user);
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
void DVD::borrow_material(string borrow_user){
    situation=false;
    borrow_user_list.push_back(borrow_user);
}
void DVD::set_length(int Len){
    length=Len;
}
int DVD::get_length(){
    return length;
}

