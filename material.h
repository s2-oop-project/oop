//this is the h file for material class include:
//    material(abstract)
//    book
//    ebook
//    DVD
#ifndef MATERIAL_H
#define MATERIAL_H
#include<string>
using namespace std;

class material{
    // methods of materials
public:
    material();
    void set_up(string Material_name,string Autor_name);
    void borrow_material();
    void return_material();
    string get_material_name();
    string get_autor_name();
    bool get_situation();

    // attribute of materials
    string material_name;
    string autor_name;
    bool situation;
};
#endif

// this sub-class is for ebook
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



// this sub-class is for book
class book:public material
{
public:
    book();
    void set_page_number(int Page);
    int get_page_num();
    
    int page_num;
};

//this sub-class is for DVD
class DVD:public material
{
public:
    DVD();
    void set_length(int Len);
    int get_length();
    
    int length;
};
