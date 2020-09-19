//initialize as material name: none ,actor name : none  situation true means available to rent


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


