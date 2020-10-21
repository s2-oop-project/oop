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
    virtual void test_use_material_setup(string t_name,string t_author);
    virtual void check_history();
    virtual void borrow_material(string borrow_user)=0;
    virtual void add_new_material()=0;
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
    ~material();
};






// this sub-class is for ebook
class Ebook:public material
{
public:
    
    Ebook();
    void test_use_material_setup(string t_name,string t_author);
    void set_page_number(int Page);
    void borrow_material(string borrow_user);
    void add_new_material();
    int get_page_num();
    int get_download_count();
    void check_history();

    int page_num;
    int download_count;
    ~Ebook();
    
};



// this sub-class is for book
class book:public material
{
public:
    book();
    void test_use_material_setup(string t_name,string t_author);
    void borrow_material(string borrow_user);
    void set_page_number(int Page);
    void add_new_material();
    int get_page_num();
    void check_history();
    ~book();
    
    int page_num;
};




//this sub-class is for DVD
class DVD:public material
{
public:
    DVD();
    void test_use_material_setup(string t_name,string t_author);
    void borrow_material(string borrow_user);
    void add_new_material();
    void set_length(int Len);
    int get_length();
    void check_history();
    ~DVD();
    
    
    int length;
};
#endif
