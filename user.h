//this is the abstract class of user,which have child class:
//    member
//    stuff

#ifndef USER_H
#define USER_H
#include<string>

using namespace std;

//method
class user
{
public:
    user() ;
    change_password();
    
    
    
    int get_left_Borrow_number();
    int get_user_ID();
    string get_user_password();
    
//atribute
    int user_ID;
    int left_Borrow_number;
    string user_password;
    
};
#endif
