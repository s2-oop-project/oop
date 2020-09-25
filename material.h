//this is the h file for material class include:
//    material(abstract)
//    book
//    ebook
//    DVD
#ifndef MATERIAL_H
#define MATERIAL_H
#include<string>
#include<vector>
using namespace std;

class material{
    // methods of materials
public:
    material();
    void set_up(string Material_name,string Author_name);
    virtual void borrow_material(string borrow_user)=0;
    void return_material();
    
    
    string get_material_name();
    string get_author_name();
    bool get_situation();
    vector<string> get_borrow_user_list();

    // attribute of materials
    string material_name;
    string author_name;
    bool situation;
    vector<string> borrow_user_list;
};


// this sub-class is for ebook
class Ebook:public material
{
public:
    Ebook();
    void set_page_number(int Page);
    void borrow_material(string borrow_user);
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
    void borrow_material(string borrow_user);
    void set_page_number(int Page);
    int get_page_num();
    
    int page_num;
};




//this sub-class is for DVD
class DVD:public material
{
public:
    DVD();
    void borrow_material(string borrow_user);
    void set_length(int Len);
    int get_length();
    
    int length;
};
#endif
