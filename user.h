//this is the abstract class of user,which have child class:
//    member
//    stuff

#ifndef USER_H
#define USER_H
#include<string>
#include"material.h"

using namespace std;

//method
class user
{
public:
    user() ;
    void set_up_account(string User_name,string User_password);
    void change_user_password(string Password);
    void Ebook_borrow(Ebook borrow_ebook);
    void book_borrow(book borrow_book);
    void   DVD_borrow(DVD borrow_DVD);
    
    
    string get_user_password();
    string get_user_name();
    int get_user_ID();
    vector<Ebook> get_Myebook();
    vector<book> get_Mybook();
    vector<DVD>  get_MyDVD();
//atribute
    static int ID;
    int user_ID;
    string user_password;
    string user_name;
    vector<Ebook> Myebook;
    vector<book> Mybook;
    vector<DVD> MyDVD;
    
};

class staff: public user
{
    vector<Ebook> add_new_ebook(vector<Ebook> Ebook_collection);
    vector<book>  add_new_book(vector<book> book_collection);
    vector<DVD>   add_new_DVD(vector<DVD> DVD_collection);
    
};
#endif



