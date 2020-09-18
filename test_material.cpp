#include<iostream>
#include<string>
#include"material.h"
#include<vector>
using namespace std;

int main(){
    int i=0;
    char continue_add_book='Y';
    while (continue_add_book=='Y'){
        
        string Material_name;
        string Autor_name;
        cout<<"input your material's name:";
        cin>>Material_name;
        cout<<"input Autor's name:";
        cin>>Autor_name;
        material new_material;
        new_material.set_up(Material_name,Autor_name);
        cout<<endl<<endl<<endl<<"secuessfully add book:"<<endl<<"material name:"<<new_material.material_name<<endl<<"material autor:"<<new_material.autor_name<<endl<<endl;
        i+=1;
        cout<<"continue to add book?(Y/N):";
        cin>>continue_add_book;
    }
    
}

