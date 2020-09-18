//this is a vector for collecting all the material
#include<iostream>
#include<vector>
#include<string>
#include"material.h"

extern material add_book();

using namespace std;

int  main(){
    int material_counting=0;
    material *material_vector;
    char add_boolean='Y';
    while(add_boolean=='Y'){
        *(material_vector+material_counting)=add_book();
        material_counting+=1;
        cout<<"continue to add book(Y):"<<endl<<"you can check material list by input(C):";
        cin>>add_boolean;
        while(add_boolean=='C'){
            for (int i=0;i<material_counting;i++){
                cout<<material_vector[i].get_material_name()<<endl;
            }
            cout<<"continue to add book(Y):"<<endl<<"you can check material list by input(C):";
            cin>>add_boolean;
            
        }
    }
    return 0;
}

