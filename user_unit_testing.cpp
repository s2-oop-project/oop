#include <iostream>
#include "material.h"
#include "user.h"
#include <string>

using namespace std;

int main(){

	// 1. testing for setting up account

	//set up account(name, password) for user 

	// 1-1. testing for user ID
	{
		user *user1;
		user1 = new user();
		user1->test_use_user_setup("Kayley", "123456");

		if(user1->get_user_ID()!=100){
			cout << "<<<<< 1-1. test get user ID failed>>>>>" << endl;
		}
	}

	// 1-2. testing for user name
	{
		user *user1;
		user1 = new user();
		user1->test_use_user_setup("Kayley", "123456");

		if(user1->get_user_name()!="Kayley"){
			cout << "<<<<< 1-2. test get user name failed>>>>>" << endl;
		}
	}

	// 1-3. testing for user password
	{
		user *user1;
		user1 = new user();
		user1->test_use_user_setup("Kayley", "123456");

		if(user1->get_user_password()!="123456"){
			cout << "<<<<< 1-3. test get user password failed>>>>>" << endl;
		}
	}

	// 1-4. testing for changing user password
	{
		user *user1;
		user1 = new user();
		user1->test_use_user_setup("Kayley", "123456");
		user1->change_user_password();

		if(user1->get_user_password()!="123"){
			cout << "<<<<< 1-4. test change user password failed>>>>>" << endl;
		}
	}


	// 2. testing for staff

	// 2-1. testing for staff ID
	{
		staff *staff1;
		staff1 = new staff();
		staff1->test_use_staff_setup();
		if(staff1->get_user_ID()!=200){
			cout << "<<<<< 2-1. test get staff ID failed>>>>>" << endl;
		}

	}

	// 2-2. testing for staff name
	{
		staff *staff1;
		staff1 = new staff();
		staff1->test_use_staff_setup();
		if(staff1->get_user_name()!="201"){
			cout << "<<<<< 2-2. test get staff name failed>>>>>" << endl;
		}

	}

	// 2-3. testing for staff password
	{
		staff *staff1;
		staff1 = new staff();
		staff1->test_use_staff_setup();

		if(staff1->get_user_password()!="123456"){
			cout << "<<<<< 2-3. test get staff password failed>>>>>" << endl;
		}
	}

	// 2-4. testing for changing staff password
	{
		staff *staff1;
		staff1 = new staff();
		staff1->test_use_staff_setup();

		staff1->change_user_password();

		if(staff1->get_user_password()!="123"){
			cout << "<<<<< 2-4. test change staff password failed>>>>>" << endl;
		}
	}

	// 3. testing for borrow_return materials
	// 3-1. ebook (borrow)
	{
		cout << endl << "<<<<< 3-1. ebook testing >>>>>" << endl;
		Ebook *ebook1;
		ebook1 = new Ebook();
		ebook1->test_use_material_setup("ebook1", "e.author1");

		user *user1;
		user1 = new user();
		user1->test_use_user_setup("user1", "123456");

		user1->ebook_borrow(*ebook1);
	}

	// 3-2. book (borrow, list, return)
	{
		cout << endl <<"<<<<< 3-2. book testing >>>>>" << endl;
		book *book1;
		book1 = new book();
		book1->test_use_material_setup("book1", "b.author1");

		user *user1;
		user1 = new user();
		user1->test_use_user_setup("user1", "123456");

		//borrow
		user1->book_borrow(*book1);
		//list books that the user borrowed
		user1->list_book_borrow();

		//testing for return books that user1 borrowed
		user1->return_material();
	}

	// 3-3. DVD (borrow, list, return)
	{
		cout << endl << "<<<<< 3-3. DVD testing >>>>>" << endl;
		DVD *DVD1;
		DVD1 = new DVD();
		DVD1->test_use_material_setup("DVD1", "D.author1");

		user *user1;
		user1 = new user();
		user1->test_use_user_setup("user1", "123456");

		//borrow
		user1->DVD_borrow(*DVD1);
		//list books that the user borrowed
		user1->list_book_borrow();

		//testing for return books that user1 borrowed
		user1->return_material();
	}



	return 0;
}