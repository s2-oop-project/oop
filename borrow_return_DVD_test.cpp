//This is the test of add material

#include<iostream>
#include<string>
#include<vector>
#include"material.h"
#include"user.h"

using namespace std;

int main(){
    vector<book> book_Collection;

    
    book book1,book2,book3,book4,book5,book6;
    
    book1.set_up("book1","a1");
    book2.set_up("book2","a2");
    book3.set_up("book3","a3");
    book4.set_up("book4","a4");
    book5.set_up("book5","a5");
    book6.set_up("book6","a6");
    
    user user1, user2;
    user1.book_borrow(book1);
    user1.book_borrow(book2);
    user1.book_borrow(book3);
    user1.book_borrow(book4);
    user1.book_borrow(book5);
    user1.book_borrow(book6);
    
    user1.return_material();
    user1.list_book_borrow();

    DVD DVD1, DVD2, DVD3, DVD4;
    DVD1.set_up("DVD1", "a1");
    DVD2.set_up("DVD2", "a2");
    DVD3.set_up("DVD3", "a3");
    DVD4.set_up("DVD4", "a4");


    user2.DVD_borrow(DVD1);
    user2.DVD_borrow(DVD2);
    user2.DVD_borrow(DVD3);
    user2.DVD_borrow(DVD4);


    user2.return_material();
    user2.list_book_borrow();

    return 0;
}
