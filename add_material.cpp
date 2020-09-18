#include<iostream>
#include<string>
#include"material.h"

using namespace std;

material add_book(){
    string Material_name;
    string Autor_name;
    cout<<"input your material's name:";
    cin>>Material_name;
    cout<<"input Autor's name:";
    cin>>Autor_name;
    material new_material;
    new_material.set_up(Material_name,Autor_name);
    cout<<endl<<endl<<endl<<"secuessfully add book:"<<endl<<"material name:"<<new_material.material_name<<endl<<"material autor:"<<new_material.autor_name<<endl<<endl;
    return new_material;
}

