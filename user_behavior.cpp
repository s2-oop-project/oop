#include<iostream>
#include<vector>
#include<string>
//this program is for easy manage for asking user to choose what survice they want


using namespace std;

int public_behavior(){
    int user_input;
    cout<<"What would you like to do today?"<<endl;
    cout<<"1: Borrow material"<<endl;
    cout<<"2: Return material"<<endl;
    cout<<"3: Change current password."<<endl;
    cout<<"4: check your current borrow list"<<endl;
    cout<<"-1: Quit account"<<endl;
    cin>>user_input;
    while(user_input != 1 && user_input != 2 && user_input != 3 && user_input != 4 && user_input != -1){
        cout<<"Invalid output please enter the number of your choose:(borrow -> input 1) "<<endl;
        cin>>user_input;
    }
    return user_input;
}

int staff_behavior(){
    int staff_input;
    cout<<"What would you like to do today?"<<endl;
    cout<<"1: Borrow material"<<endl;
    cout<<"2: Return material"<<endl;
    cout<<"3: Change current password."<<endl;
    cout<<"4: Check History"<<endl;
    cout<<"5: Add material"<<endl;
    cout<<"6: check your current borrow list"<<endl;
    cout<<"-1: Quit account"<<endl;
    cin>>staff_input;
    while((staff_input >=7) || (staff_input <=-2) || (staff_input == 0) ){
        cout<<"Invalid output please enter the number of your choose:(borrow -> input 1) "<<endl;
        cin>>staff_input;
    }

    
    return staff_input;
}

