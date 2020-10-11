#include<iostream>
#include<string>
#include<vector>
#include"material.h"

using namespace std;

string show_material_situation(bool situ){
    string material_situation;
    if(situ == true){
        material_situation="available";
    }else{
        material_situation="rent out";
    
    }
    return material_situation;
}








int choose_material(vector<Ebook> ebook_list, vector<book> book_list, vector<DVD> DVD_list){
    //passing: three collection of material
    //out: a int with meaning
    //     1xxxx   ebook;
    //     2xxxx   book;
    //     3xxxx   DVD;
    
    
    
    int user_choose;
    int material_code=0;
    
    cout<<"This is the material list we have in the library:"<<endl;
    
    
    //showing all ebook
    cout<<endl<<endl<<"Ebook:"<<endl;
    cout<<"ebook code    material situation    Ebook in the library:"<<endl;
    
    
    for(int i=0;i<ebook_list.size();i++){
        //book_code define :
        material_code=10000;
        material_code=material_code+i;
        
        //show ebook:
        cout<<material_code<<"         "<<show_material_situation(ebook_list[i].get_situation())<<"             "<<ebook_list[i].get_material_name()<<endl;
    }
    
    
    
    //showing all book
    cout<<endl<<endl<<"book:"<<endl;
    cout<<"book code    material situation    book in the library:"<<endl;
    
    
    for(int i=0;i<book_list.size();i++){
        //book_code define :
        material_code=20000;
        material_code=material_code+i;
        
        //show book:
        cout<<material_code<<"         "<<show_material_situation(book_list[i].get_situation())<<"             "<<book_list[i].get_material_name()<<endl;
    }
    
    
    //showing all DVD
    cout<<endl<<endl<<"DVD:"<<endl;
    cout<<"DVD code    material situation    DVD in the library:"<<endl;
    
    
    for(int i=0;i<DVD_list.size();i++){
        //book_code define :
        material_code=30000;
        material_code=material_code+i;
        
        //show ebook:
        cout<<material_code<<"         "<<show_material_situation(DVD_list[i].get_situation())<<"             "<<DVD_list[i].get_material_name()<<endl;
    }
    
    //code to take out the the code doesn't exist
    bool code_found=false;
    cout<<"Please enter the material code related to the one you want to borrow."<<endl;
    cin>>user_choose;
    
    
    
    while(user_choose>=10000 && user_choose<20000 && code_found==false){
        //check if its a ebook
        user_choose = user_choose-10000;
        if (user_choose>=ebook_list.size() ){
            cout<<"material code didn't found,please enter again:";
            cin>>user_choose;
        }else{
            code_found=true;
            user_choose=user_choose+10000;
        }
        
        
    }
    
    
    
    while(user_choose>=20000 && user_choose<30000 && code_found==false){
        //check if its a book
        user_choose = user_choose-20000;
        if (user_choose>=book_list.size() ){
            cout<<"material code didn't found,please enter again:";
            cin>>user_choose;
        }else{
            code_found=true;
            user_choose=user_choose+20000;
        }
        
    }
    
    
    while(user_choose>=30000 && user_choose<40000 && code_found==false){
        //check if its a DVD
        user_choose = user_choose-30000;
        if (user_choose>=DVD_list.size() ){
            cout<<"material code didn't found,please enter again:";
            cin>>user_choose;
        }else{
            code_found=true;
            user_choose=user_choose+30000;
        }
        
        
    }
    
    while(user_choose<10000 || user_choose>40000 ){
        cout<<"material code didn't found,please enter again:";
        cin>>user_choose;
    }
        
    return user_choose;
}


