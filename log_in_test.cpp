// this function is for testing the log in function.


#include<iostream>
#include<string>
#include<vector>
#include<limits>
#include"user.h"
#include"material.h"

extern int log_in(vector<user> user_list);
using namespace std;

int main(){
    user the_user;
    int user_index;
    vector<user> user_list;
    the_user.test_use_user_setup("wai","wai");
    user_list.push_back(the_user);
    the_user.test_use_user_setup("tong" ,"tong");
    user_list.push_back(the_user);
    user_index=log_in(user_list);
}
