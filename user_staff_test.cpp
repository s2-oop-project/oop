#include<iostream>
#include<string>

#include"user.h"

#include"material.h"

using namespace std;

int main(){
    //set up material information to test borrow-return material(ebook, book & DVD)
    vector<Ebook> Ebook_list;
    vector<book>  book_list;
    vector<DVD>   DVD_list;
    
    Ebook ebook1, ebook2, ebook3;
    ebook1.test_use_material_setup("ebook1","e.author1");
    ebook2.test_use_material_setup("ebook2","e.author2");
    ebook3.test_use_material_setup("ebook3","e.author3");
    Ebook_list.push_back(ebook1);
    Ebook_list.push_back(ebook2);
    Ebook_list.push_back(ebook3);
    
    book book1, book2, book3;
    book1.test_use_material_setup("book1","b.author1");
    book2.test_use_material_setup("book2","b.author2");
    book3.test_use_material_setup("book3","b.author3");
    book_list.push_back(book1);
    book_list.push_back(book2);
    book_list.push_back(book3);
    
    DVD dvd1, dvd2, dvd3;
    dvd1.test_use_material_setup("D1","d.author1");
    dvd2.test_use_material_setup("D2","d.author2");
    dvd3.test_use_material_setup("D3","d.author3");
    DVD_list.push_back(dvd1);
    DVD_list.push_back(dvd2);
    DVD_list.push_back(dvd3);




	// 1. testing for setting up account (staff)

	//set up account(name, password) for staff 
	staff staffs[3];
	int staff_size = sizeof(staffs)/sizeof(staffs[0]);

	for(int i=0; i<staff_size; i++){
		staffs[i].test_use_staff_setup();
	}

	//print out staff information (ID, name and password)
	cout << endl << endl << "<<<testing for printing out staff information which is set up in the system>>>" << endl;
	for(int i=0; i<staff_size; i++){
		cout << i+1 << ". staff ID: " << staffs[i].get_user_ID() << ", staff name: "<< staffs[i].get_user_name() << ", staff password: " << staffs[i].get_user_password() << endl;
	}




	// 2. testing for changing password (staff)
	cout << endl << endl << "<<<testing for changing staff1 password>>>" << endl << endl;
	staffs[1].change_user_password();
	cout << endl <<"new password for staff1: " << staffs[1].get_user_password() << endl;







    // 3. testing for borrow-return materials(ebook, book, DVD) (staff)
    cout << endl << endl << "<<<testing for borrow-return materials>>" << endl << endl;
    staffs[0].ebook_borrow(Ebook_list[0]);
    staffs[0].book_borrow(book_list[0]);
    staffs[0].book_borrow(book_list[1]);
    staffs[0].DVD_borrow(DVD_list[0]);
    cout << endl << "<<a list of books the staff borrowed>>" << endl;
    staffs[0].list_book_borrow();
    staffs[0].return_material();
    cout << endl << "<<the rest of books the staff borrowed after returning>>" << endl;
    staffs[0].list_book_borrow();







	// 4. testing for check history (staff)
    // setup public user to borrow book
    user *user1;
	user1 = new user();
	user1->test_use_user_setup("user1", "0000");
    // user1 borrows book1 (book_list[0])
	user1->book_borrow(book_list[1]);

    //testing if staff can check history
    staffs[0].check_history(Ebook_list, book_list, DVD_list);
/*
    staff *staff4;
    staff4 = new staff();
    staff4->test_use_staff_setup();
    staff4->check_history(Ebook_list, book_list, DVD_list);
*/
    return 0;
}