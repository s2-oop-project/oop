//this is an abstract class for material include:
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
    void borrow_book();
    void return_book();
    string get_material_name();
    string get_autor_name();
    bool get_situation();

    // attribute of materials
    string material_name;
    string autor_name;
    bool situation;
};
#endif
