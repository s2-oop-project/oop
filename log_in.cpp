#include<iostream>
#include<string>
#include<vector>
#include<limits>
#include"user.h"
#include"material.h"

using namespace std;

//passing : user vector
//output : index of correspond ID
int find_user_ID(vector<user> user_list){
    int user_input_ID;
    int my_user_index;
    bool find_ID=false;
    while(find_ID == false){
        //ensure correct input
        cout<<"To login, please enter your ID:"<<endl;
        //cout<<"<cancel login enter -1>"<<endl;
        while(true){
            if(cin>>user_input_ID){
                break;
            }else{
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            }
                
        }
        //cancel by input -1;
        if(user_input_ID == -1){
            find_ID=true;
            my_user_index=-1;
        }
        
        //check ID
        for(int i=0;i<user_list.size();i++){
            if(user_input_ID == user_list[i].get_user_ID() ){
                find_ID = true;
                my_user_index=i;
            }
        }
        if(find_ID == false){
            cout<<"wrong ID, please enter again."<<endl;
        }
    }
    
    
    return my_user_index;
}

//passing: user vector, index of user
//output:  index of user if correct password


int check_password(int user_index,vector<user> user_list){
    string user_input_password;
    cout<<user_list[user_index].get_user_name()<<",please enter your password:"<<endl;
    //cout<<"<enter -1 to quit login>"<<endl;
    while(true){
        if(cin>>user_input_password){
            break;
        }else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
    }
    if(user_input_password == "-1"){
        return -1;
    }else if(user_input_password == user_list[user_index].get_user_password() ){
        cout<<"sucessfully login."<<endl;
        return 1;
    }else{
        cout<<"incorrect password."<<endl;
        return 0;
    }
}


// passing : user vector
// output  : return user index
int log_in(vector<user> user_list){
    int control_login;
    int user_potential_index;
    int checking_password=0;
    
    user_potential_index=find_user_ID(user_list);
    if(user_potential_index == -1){
        user_potential_index=-1;
    }else{

        while(checking_password == 0){
            checking_password=check_password(user_potential_index,user_list);
        }
    }
    return user_potential_index;
}













//for staff

int find_staff_ID(vector<staff> staff_list){
    int staff_input_ID;
    int my_staff_index;
    bool find_ID=false;
    while(find_ID == false){
        //ensure correct input
        cout<<"To login, please enter your ID:"<<endl;
        //cout<<"<cancel login enter -1>"<<endl;
        while(true){
            if(cin>>staff_input_ID){
                break;
            }else{
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            }
                
        }

        //check ID
        for(int i=0;i<staff_list.size();i++){
            if(staff_input_ID == staff_list[i].get_user_ID() ){
                find_ID = true;
                my_staff_index=i;
            }
        }
        if(find_ID == false){
            cout<<"wrong ID, please enter again."<<endl;
        }
    }
    
    
    return my_staff_index;
}



//passing: staff vector, index of staff
//output:  index of staff if correct password


int staff_check_password(int staff_index,vector<staff> staff_list){
    string staff_input_password;
    cout<<"staff number "<<staff_list[staff_index].get_user_name()<<",please enter your password:"<<endl;
    //cout<<"<enter -1 to quit login>"<<endl;
    while(true){
        if(cin>>staff_input_password){
            break;
        }else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
    }
    if(staff_input_password == "-1"){
        return -1;
    }else if(staff_input_password == staff_list[staff_index].get_user_password() ){
        cout<<"sucessfully login."<<endl;
        return 1;
    }else{
        cout<<"incorrect password."<<endl;
        return 0;
    }
}





// passing : staff vector
// output  : return staff index
int staff_log_in(vector<staff> staff_list){
    int control_login;
    int staff_potential_index;
    int checking_password=0;
    
    staff_potential_index=find_staff_ID(staff_list);
    if(staff_potential_index == -1){
        staff_potential_index=-1;
    }else{

        while(checking_password == 0){
            checking_password=staff_check_password(staff_potential_index,staff_list);
        }
    }
    if (checking_password == -1){
        staff_potential_index=-1;
    }
    if (checking_password == 1){
        staff_potential_index=1;
    }
    return staff_potential_index;
}
    
    
    

//int user_log_in(vector<user> user_list){
//    int user_input_ID;
//    int check_index=0;
//    user my_user;
//    bool find_ID= false;
//
//
//    //ask for user ID
//    while (find_ID == false){
//        cout<<"please enter your ID:"<<endl<<"If you want to cancel log in, please enter -1"<<endl;
//        cin>>user_input_ID;
//
//        cout<<user_input_ID;
//        if (user_input_ID == -1){
//            return -1;
//        }
//        //check the user vector 1 by 1
//        while (check_index < user_list.size() ){
//                if( user_list[check_index].get_user_ID() == user_input_ID){
//                    my_user=user_list[check_index];
//                    find_ID=true;
//                }else{
//                    check_index+=1;
//                }
//        }
//        if(find_ID== false){
//            cout<<"we did not found this user, please enter your ID again."<<endl;
//            cin.ignore();
//        }
//    }
//
//
//
//    string input_password;
//    cout<<"Hi! "<< my_user.get_user_name()<<" , please enter your password: "<<endl<<"if you want to cancel log in , please enter (cancel)."<<endl;
//    cin>>input_password;
//    if (input_password =="cancel"){
//        return -1;
//    }
//    while (input_password != my_user.get_user_password() ){
//        cout<<"wrong password, please try again"<<endl<<"if you want to cancel log in , please enter (cancel)."<<endl;
//        cin>>input_password;
//        if (input_password =="cancel"){
//            return -1;
//        }
//    }
//    return check_index;
//}
//
//
//int main (){
//    vector<user> user_list_out;
//    user user1;
//    user1.set_up_account();
//    user_list_out.push_back(user1);
//    user user2;
//    user2.set_up_account();
//    user_list_out.push_back(user2);
//    cout<<user_log_in(user_list_out);
//
//
//}


