#include<iostream>
#include<string>
#include<vector>
#include"user.h"
#include"material.h"
#include<limits>

using namespace std;


//extern function
extern int log_in(vector<user> user_list);
extern int staff_log_in(vector<staff> staff_list);
extern int choose_material(vector<Ebook> Ebook_list, vector<book> book_list, vector<DVD> DVD_list);
extern int public_behavior();
extern int staff_behavior();

extern vector<Ebook> list_of_ebook(vector<Ebook> Ebook_list);
extern vector<book> list_of_book(vector<book> book_list);
extern vector<DVD> list_of_DVD(vector<DVD> DVD_list);



int main(){
    
    //
    int material_num;
    int material_choose;
    int user_num=0;
    int user_type;
    int user_choose=0;
    int current_user_index=-1;
    int current_staff_index=-1;
    user current_user;
    staff current_staff;
    //set up of the library material vector
    
    vector<Ebook>  library_ebook_list;
    vector<book>   library_book_list;
    vector<DVD>    library_DVD_list;

    library_ebook_list = list_of_ebook(library_ebook_list);
    library_book_list = list_of_book(library_book_list);
    library_DVD_list = list_of_DVD(library_DVD_list);
    
    
   //set up of the library user vector

    vector<user> user_list;
    vector<staff> staff_list;
    
    
    //test for set up
    user newuser;
    staff newstaff;
    newuser.test_use_user_setup("wai","wai");
    user_list.push_back(newuser);
    newstaff.test_use_staff_setup();
    staff_list.push_back(newstaff);
    
    

    //user log in
    while(user_num==0){
        cout<<endl;
        cout<<"Welcome to the library!"<<endl<<"please choose your log in type"<<endl<<"1 user log in."<<endl<<"2 staff log in"<<endl<<"3 new user? create account now!"<<endl<<"4 quit system."<<endl;
        
        //ignore unusable input
        while (true) {
          if (cin >>user_choose ) {

            break;
          } else {
            cout<<"invalid input,please enter again."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
          }
        }
        while(user_choose<1 || user_choose>4){
            cout<<"invalid input,please enter again."<<endl;
            while (true) {
              if (cin >>user_choose ) {
                break;
              } else {
                cout<<"invalid input,please enter again."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
              }
            }
        }
        
        
        cin.ignore();
        //different behavior log in,staff , creat account

        //login
        if(user_choose ==1){
            
            current_user_index=log_in(user_list);
            if(current_user_index==-1){
                user_num=0;
                user_type=0;
            }else{
            user_type = 1;
            }
        }
        //staff login
        else if(user_choose == 2){
            current_staff_index=staff_log_in(staff_list);
            if(current_staff_index==-1){
                user_num=0;
                user_type=0;
            }else{
            user_type = 2;
            }
        }
        // create account
        else if (user_choose == 3){
            current_user_index=user_list.size()+1;
            current_user.set_up_account();
            user_list.push_back(current_user);
            user_num=0;
            user_type=0;
        }else{
            //system off
            user_num=-1;
            user_type=0;
            
            //free memory
            for (int i=0;i<user_list.size();i++){
                delete [] user_list[i].mybook;
                delete [] user_list[i].myDVD;
            }
            cout<<"user memory free"<<endl;
            for(int i=0;i<staff_list.size();i++){
                delete [] staff_list[i].mybook;
                delete [] staff_list[i].myDVD;
            }
            cout<<"staff memory free"<<endl;
            
            cout<<"system off"<<endl;
            
        }
        
        
        
        
        
        
        
        
        
        
        //different behaviour for user or staff
        
        
        
        int behavior_num=0;
        while (behavior_num != -1 && user_type != 0){
            
            
            
            
            
            
            //normal user
            if(user_type==1){
                
                
                //ask behavior
                //cout<<user_list[current_user_index].maximum_borrow<<endl;
                behavior_num=public_behavior();
                switch (behavior_num) {
                    //borrow
                    case 1:
                        material_choose=choose_material(library_ebook_list,library_book_list,library_DVD_list);
                        if(material_choose>=10000 && material_choose<20000){
                            material_num=material_choose-10000;
                            user_list[current_user_index].ebook_borrow(library_ebook_list[material_num]);
                            library_ebook_list[material_num].borrow_material(user_list[current_user_index].get_user_name());
                        }else if(material_choose>=20000 && material_choose<30000){
                            material_num=material_choose-20000;
                            user_list[current_user_index].book_borrow(library_book_list[material_num]);
                            library_book_list[material_num].borrow_material(user_list[current_user_index].get_user_name());
                        }else{
                            material_num=material_choose-30000;
                            user_list[current_user_index].DVD_borrow(library_DVD_list[material_num]);
                            library_DVD_list[material_num].borrow_material(user_list[current_user_index].get_user_name());
                        }
                        break;
                        
                    //return
                    case 2:
                        user_list[current_user_index].return_material();
                        
                        break;
                        
                        
                   //change password
                    case 3:
                        user_list[current_user_index].change_user_password();
                        break;
                        
                        
                    case 4:
                        //cout<<user_list[current_user_index].maximum_borrow<<endl;//
                        user_list[current_user_index].list_book_borrow();
                        break;
                        
                        
                   //quit
                    case -1:
                        behavior_num = -1;
                        break;
                    default:
                        
                        break;
                }
            }
            
            
            if (user_type==2){
                DVD new_DVD;
                Ebook new_ebook;
                book new_book;
                //ask behavior
                behavior_num=staff_behavior();
                switch (behavior_num) {
                        
                    //borrow
                    case 1:
                        material_choose=choose_material(library_ebook_list,library_book_list,library_DVD_list);
                        if(material_choose>=10000 && material_choose<20000){
                            material_num=material_choose-10000;
                            staff_list[current_staff_index].ebook_borrow(library_ebook_list[material_num]);
                            library_ebook_list[material_num].borrow_material(staff_list[current_staff_index].get_user_name());
                            
                        }else if(material_choose>=20000 && material_choose<30000){
                            material_num=material_choose-20000;
                            staff_list[current_staff_index].book_borrow(library_book_list[material_num]);
                            library_book_list[material_num].borrow_material(staff_list[current_staff_index].get_user_name());
                        }else{
                            material_num=material_choose-30000;
                            staff_list[current_staff_index].DVD_borrow(library_DVD_list[material_num]);
                            library_DVD_list[material_num].borrow_material(staff_list[current_staff_index].get_user_name());
                        }
                        break;
                        
                          
                        
                    // return
                    case 2:
                        staff_list[current_staff_index].return_material();
                        break;
                        
                        
                   // change password
                    case 3:
                        staff_list[current_staff_index].change_user_password();
                        break;
                        
                        
                  //check history
                    case 4:
                        material_choose=choose_material(library_ebook_list,library_book_list,library_DVD_list);
                        if(material_choose>=10000 && material_choose<20000){
                            material_num=material_choose-10000;
                            library_ebook_list[material_num].check_history();
                        }else if(material_choose>=20000 && material_choose<30000){
                            material_num=material_choose-20000;
                            library_book_list[material_num].check_history();
                        }else{
                            material_num=material_choose-30000;
                            library_DVD_list[material_num].check_history();
                        }
                        
                        break;
                   //add material
                    case 5:
                        cout<<"Which type of material would you like to add?"<<endl<<"1 ebook"<<endl<<"2 book"<<endl << "3 DVD"<<endl;
                        int staff_add_choose;
                        while (true) {
                          if (cin >>staff_add_choose ) {
                            break;
                          } else {
                            cout<<"invalid input,please enter again."<<endl;
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                          }
                        }
                        switch (staff_add_choose) {
                                
                                //ebook
                            case 1:
                                new_ebook.add_new_material();
                                library_ebook_list.push_back(new_ebook);
                                
                                break;
                                
                                
                                //book
                            case 2:
                                new_book.add_new_material();
                                library_book_list.push_back(new_book);
                                break;
                                
                                //DVD
                            case 3:
                                new_DVD.add_new_material();
                                library_DVD_list.push_back(new_DVD);
                                break;
                                
                            default:
                                break;
                        }
                        
                        break;
                        
                    case 6:
                        staff_list[current_staff_index].list_book_borrow();
                        break;
                        
                        
                        //quit
                    case -1:
                        behavior_num = -1;
                        break;
                    default:
                        
                        break;
                }
        }
        
        }
        
    }
}
