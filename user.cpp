//this is the abstract class cpp of user,which have child class:
//    member
//    stuff

#include<iostream>
#include<string>
#include<vector>
#include"user.h"

extern vector<Ebook> add_ebook(vector<Ebook>);
extern vector<book> add_book(vector<book>);
extern vector<DVD> add_DVD(vector<DVD>);
using namespace std;
int ID=0;

user::user(){
    user_ID=100+ID;
    ID+=1;
    
}
void user::set_up_account(string User_name,string User_password){
    user_name=User_name;
    user_password=User_password;
}
void user::change_user_password(string Password){
    user_password=Password;
    
}
void user::Ebook_borrow(Ebook borrow_ebook){
    Myebook.push_back(borrow_ebook);
}
void user::book_borrow(book borrow_book){
    Mybook.push_back(borrow_book);
}
void  user::DVD_borrow(DVD borrow_DVD){
    MyDVD.push_back(borrow_DVD);
}

string user::get_user_password(){
    return user_password;
}
string user::get_user_name(){
    return user_name;
}
int user::get_user_ID(){
    return user_ID;
}
vector<Ebook> user::get_Myebook(){
    return Myebook;
}
vector<book> user::get_Mybook(){
    return Mybook;
}
vector<DVD>  user::get_MyDVD(){
    return MyDVD;
}


vector<Ebook> staff::add_new_ebook(vector<Ebook> Ebook_collection){
    return add_ebook(Ebook_collection);
}
vector<book>  staff::add_new_book(vector<book> book_collection){
    return add_book(book_collection);
}
vector<DVD>   staff::add_new_DVD(vector<DVD> DVD_collection){
    return  add_DVD(DVD_collection);
}

