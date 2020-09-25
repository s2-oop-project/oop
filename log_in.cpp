#include<iostream>
#include<string>
#include<vector>
#include"user.h"
#include"material.h"

using namespace std;

// this log in system will return the index of user in user_list vector
// if user enter -1, quit log in function




int user_log_in(vector<user> user_list){
    int user_input_ID;
    int check_index=0;
    user my_user;
    bool find_ID= false;

    
    //ask for user ID
    while (find_ID == false){
        cout<<"please enter your ID:"<<endl<<"If you want to cancel log in, please enter -1"<<endl;
        cin>>user_input_ID;
        if (user_input_ID== -1){
            return -1;
        }
        //check the user vector 1 by 1
        while(check_index < user_list.size() ){
            //if not fix ID
            if(user_input_ID != user_list[check_index].get_user_ID()){
                check_index+=1;
                
            }else{
                
                //if fix ID
                my_user=user_list[check_index];
                find_ID=true;
            }
        }
        //can't find password
        if(find_ID==false){
            cout<<"can't find such ID , please enter again."<<endl;
        }
    }
    
    
    string input_password;
    cout<<"Hi! "<< my_user.get_user_name()<<" , please enter your password: "<<endl<<"if you want to cancel log in , please enter (cancel)."<<endl;
    cin>>input_password;
    if (input_password =="cancel"){
        return -1;
    }
    while (input_password != my_user.get_user_password() ){
        cout<<"wrong password, please try again"<<endl<<"if you want to cancel log in , please enter (cancel)."<<endl;
        cin>>input_password;
        if (input_password =="cancel"){
            return -1;
        }
    }
    return check_index;
}

    
int main (){
    vector<user> user_list_out;
    user user1;
    user1.set_up_account();
    user_list_out.push_back(user1);
    user user2;
    user2.set_up_account();
    user_list_out.push_back(user2);
    cout<<user_log_in(user_list_out);
    
    
}


