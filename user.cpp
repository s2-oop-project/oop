//this is the abstract class cpp of user,which have child class:
//    member
//    stuff

#include<iostream>
#include<string>
#include<vector>
#include"user.h"
#include<limits>
#include"material.h"


extern int choose_material(vector<Ebook> Ebook_list, vector<book> book_list, vector<DVD> DVD_list);

using namespace std;

int user::ID=0;
int user::staff_ID=0;

user::user(){
}


//use to quick set up user for test
void user::test_use_user_setup(string q_name,string q_password){
    user_ID=100+ID;
    ID+=1;
    maximum_borrow=5;
    //cout<<maximum_borrow<<endl;
    current_borrow=0;
    book_count=0;
    DVD_count=0;
    mybook = new book [maximum_borrow];
    myDVD = new DVD [maximum_borrow];
    user_name=q_name;
    user_password=q_password;
}


//for setting account
void user::set_up_account(){
    user_ID=100+ID;
    ID+=1;
    maximum_borrow=5;
    current_borrow=0;
    book_count=0;
    DVD_count=0;
    mybook = new book [maximum_borrow];
    myDVD = new DVD [maximum_borrow];
    
    cout<<"Welcome ! Please enter your name:"<<endl;
    cin.clear();
    getline(cin,user_name);
    
    cout<<"Good morning "<<user_name<<",Please set your password:"<<endl;
    cin>>user_password;
    cout<<"Successfully create account:"<<endl<<"user ID: "<<user_ID<<endl<<"user name: "<<user_name<<endl<<"user password: "<<user_password<<endl<<endl;
    cin.ignore();
    
    
}

//material borrow
void user::list_book_borrow(){
    cout<<"you have currently borrow:"<<current_borrow<<endl<<"you can borrow "<<maximum_borrow-current_borrow<<"more."<<endl;
    cout<<"Book list:"<<endl;
    for(int i=0;i<book_count;i++){
        cout<<mybook[i].get_material_name()<<endl;
        
    }
    cout<<"DVD list:"<<endl;
    for(int i=0;i<DVD_count;i++){
        cout<<myDVD[i].get_material_name()<<endl;
    }
    
}


//change password
void user::change_user_password(){
    string Password;
        cout<<"Enter your new password:"<<endl;
        cin>> Password;
        user_password=Password;
        cout<<"Successfully change your password to : "<<user_password<<endl;
    
}



//borrow material
void user::ebook_borrow(Ebook borrow_ebook){
    cout<<"sucessfully download ebook:"<<endl;
    cout<<"material name    "<<borrow_ebook.material_name<<endl;
    cout<<"author name      "<<borrow_ebook.author_name<<endl;
    cout<<"page number      "<<borrow_ebook.page_num<<endl;
    borrow_ebook.borrow_material(user_name);
}


void user::book_borrow(book borrow_book){
    if (current_borrow <5){
        mybook[book_count]=borrow_book;
        book_count+=1;
        current_borrow+=1;
        borrow_book.borrow_material(user_name);
        cout<<"sucessfully borrow book:"<<endl;
        cout<<"material name    "<<borrow_book.material_name<<endl;
        cout<<"author name      "<<borrow_book.author_name<<endl;
        cout<<"page number      "<<borrow_book.page_num<<endl;
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
        cout<<"seccessfully borrow DVD "<<endl;
        cout<<"material name    "<<borrow_DVD.material_name<<endl;
        cout<<"author name      "<<borrow_DVD.author_name<<endl;
        cout<<"Length of DVD      "<<borrow_DVD.length<<" minutes"<<endl;
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
            
            //move all element up 1 to cover the one user delete.
            for (int i = book_choose;i<current_borrow;i++){
                mybook[i]=mybook[i+1];
            }
            
        }else{
            //user return DVD;(Kay's part)
            int DVD_choose;
            
            //list the book
            cout<<"This is the list of DVD you borrow:"<<endl;
            for (int i=0;i<DVD_count;i++){
                    cout<<i+1<<"  "<<myDVD[i].get_material_name()<<endl;
                }
            
            //ask user to choose which book want to return
            cout<<"Enter the number of DVD you want to return :"<<endl;
            cin>>DVD_choose;
            DVD_choose-=1;
            //show that user return success
            cout<<"sucessfully return DVD:"<<endl<<myDVD[DVD_choose].get_material_name()<<endl;
            current_borrow-=1;
            
            
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


//for staff
//staff name will become id and password initialize as 123456
//staff can borrow 8 materials
//check borrow history of material
// add material

staff::staff(){
    
}

void staff::test_use_staff_setup(){
    user_ID=200+staff_ID;
    staff_ID+=1;
    maximum_borrow=8;
    current_borrow=0;
    book_count=0;
    DVD_count=0;
    mybook = new book [maximum_borrow];
    myDVD = new DVD [maximum_borrow];
    user_name=to_string(user_ID);
    user_password="123456";
}

void staff::check_history(vector<Ebook> Ebook_list, vector<book> book_list, vector<DVD> DVD_list){
    int user_choose;
    int material_num;
    user_choose=choose_material(Ebook_list,book_list,DVD_list);
    if(user_choose>=10000 && user_choose<20000){
        material_num=user_choose-10000;
        Ebook_list[material_num].check_history();
        
    }else if(user_choose>=20000 && user_choose<30000){
        material_num=user_choose-20000;
        book_list[material_num].check_history();
        
    }else{
        material_num=user_choose-30000;
        DVD_list[material_num].check_history();
    }

}
