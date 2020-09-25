//this is the abstract class of user,which have child class:
//    member
//    stuff

#ifndef USER_H
#define USER_H
#include<string>
#include<vector>
#include"material.h"

using namespace std;


class user
{
public:
//behavior
    user() ;
    void set_up_account();
    void change_user_password();
    void list_book_borrow();
    
//borrow material
    void book_borrow(book borrow_book);
    void DVD_borrow(DVD borrow_DVD);
    void return_material();
    
    string get_user_password();
    string get_user_name();
    int get_user_ID();
    int get_maximum_borrow();
    int get_current_borrow();
    int get_book_count();
    int get_DVD_count();

    

//atribute
//    due to ID increase in whole system so we use static
//    we count the borrow and initialize maximum_borrow to 5 (public use class user)
//    user also have their name and password,we count the sub-class of material
//    since pointer don't have push back
//    and we have two pointer dynamic array to save what material user borrow
    static int ID;
    int user_ID;
    int maximum_borrow;
    int current_borrow;
    string user_password;
    string user_name;
    int book_count;
    int DVD_count;
    book * mybook;
    DVD * myDVD;
    
};

#endif



