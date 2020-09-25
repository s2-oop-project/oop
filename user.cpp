//this is the abstract class cpp of user,which have child class:
//    member
//    stuff

#include<iostream>
#include<string>
#include<vector>
#include"user.h"
#include"material.h"

extern vector<Ebook> add_ebook(vector<Ebook>);
extern vector<book> add_book(vector<book>);
extern vector<DVD> add_DVD(vector<DVD>);
using namespace std;



user::user(){
    int ID=0;
    user_ID=100+ID;
    ID+=1;
    maximum_borrow=5;
    current_borrow=0;
    book_count=0;
    DVD_count=0;
    mybook = new book [maximum_borrow];
    myDVD = new DVD [maximum_borrow];
    
}


//quick link for setting account
void user::set_up_account(){
    cout<<"Welcome ! Please enter your name:";
    getline(cin,user_name);
    cout<<"Good morning "<<user_name<<",Please set your password:"<<endl;
    cin>>user_password;
    cout<<"Successfully create account:"<<endl<<"user ID: "<<user_ID<<endl<<"user name: "<<user_name<<endl<<"user password: "<<user_password<<endl;
}

//book borrow
void user::list_book_borrow(){
    for(int i=0;i<current_borrow;i++){
        cout<<mybook[i].get_material_name()<<endl;
    }
}


//change password
void user::change_user_password(){
    string Password;
    cout<<"Enter your old password:"<<endl;
    cin>>Password;
    if ( Password != user_password){
        cout<<"wrong old password,can't change the password."<<endl;
    }else{
        cout<<"Enter your new password:"<<endl;
        cin>> user_password;
    }
    cout<<"Successfully change your password to : "<<user_password;
    
}



//borrow material

void user::book_borrow(book borrow_book){
    if (current_borrow <5){
        mybook[book_count]=borrow_book;
        book_count+=1;
        current_borrow+=1;
        borrow_book.borrow_material(user_name);
    }else{
        cout<<"you reach your borrow maximum,please return material before you borrow"<<endl;
    }
}


void user::DVD_borrow(DVD borrow_DVD){
    if (current_borrow <5){
        myDVD[DVD_count]=borrow_DVD;
        DVD_count+=1;
        current_borrow+=1;
        borrow_DVD.borrow_material(user_name);
    }else{
        cout<<"you reach your borrow maximum,please return material before you borrow"<<endl;
    }
}


//return material
void user::return_material(){
    //can't return material if book_count and DVD count is 0;
    if(book_count != 0 || DVD_count != 0){
        char material_choose;
        cout<<"Which kind of material would you like to return?"<<endl;
        //only list the material that have borrow
        if(book_count != 0){
            cout<<"book (B)"<<endl;
        }
        if (DVD_count != 0){
            cout<<"DVD (D)"<<endl;
        }
        
        //ask user choose type to return and avoid invalid input
        cin>>material_choose;
        while(material_choose != 'B' && material_choose != 'D'){
            cout<<"Invalid input, please make sure you enter the capital letter: "<<endl;
            cin>>material_choose;
        }
        
        
        //user return book;
        if (material_choose == 'B'){
            //book show with the element index to let user choose
            int book_choose;
            
            //list the book
            cout<<"This is the list of book you borrow:"<<endl;
            for (int i=0;i<book_count;i++){
                    cout<<i+1<<"  "<<mybook[i].get_material_name()<<endl;
                }
            
            //ask user to choose which book want to return
            cout<<"Enter the number of book you want to return :"<<endl;
            cin>>book_choose;
            book_choose-=1;
            //show that user return success
            cout<<"sucessfully return book:"<<endl<<mybook[book_choose].get_material_name()<<endl;
            current_borrow-=1;
            //return material function
            mybook[book_choose].return_material();
            
            //move all element up 1 to cover the one user delete.
            for (int i = book_choose;i<current_borrow;i++){
                mybook[i]=mybook[i+1];
            }
            
        }else{
            //user return DVD;(Kay's part)
        }
    }
}







//get function
string user::get_user_password(){
    return user_password;
}
string user::get_user_name(){
    return user_name;
}
int user::get_user_ID(){
    return user_ID;
}
int user::get_maximum_borrow(){
    return maximum_borrow;
}
int user::get_current_borrow(){
    return current_borrow;
}
int user::get_book_count(){
    return book_count;
}
int user::get_DVD_count(){
    return DVD_count;
}


