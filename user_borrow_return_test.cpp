#include <iostream>
#include "material.h"
#include "user.h"
#include <string>

using namespace std;

int main(){
	//set up material information to test borrow material(book & DVD)
	//book
	book books[6];
	string book_names[6] = {"book1", "book2", "book3", "book4", "book5", "book6"};
	string book_authors[6] = {"aaaaa", "bbbbb", "ccccc", "ddddd", "eeeee", "fffff"};
	int book_pages[6] = {300, 200, 100, 700, 140, 500};

	int size_of_book = sizeof(books)/sizeof(books[0]);

	for(int i=0; i<size_of_book; i++){
		books[i].test_use_material_setup(book_names[i], book_authors[i]);
		books[i].set_page_number(book_pages[i]);
	}

	//DVD
	DVD DVDs[6];
	string DVD_names[6] = {"DVD1", "DVD2", "DVD3", "DVD4", "DVD5", "DVD6"};
	string DVD_authors[6] = {"AAaaa", "BBbbb", "CCccc", "DDddd", "EEeee", "FFfff"};
	int DVD_len[6] = {60, 220, 100, 365, 351, 30};

	int size_of_DVD = sizeof(DVDs)/sizeof(DVDs[0]);

	for(int i=0; i<size_of_DVD; i++){
		DVDs[i].test_use_material_setup(DVD_names[i], DVD_authors[i]);
		DVDs[i].set_length(DVD_len[i]);
	}




	//testing for book borrow
	cout << endl << "<<<<<testing for book borrow and return>>>>>" << endl <<endl;

	user *user1;
	user1 = new user();
	user1->test_use_user_setup("user1", "asdfghjkl");

	user1->book_borrow(books[0]);
	user1->book_borrow(books[1]);
	user1->book_borrow(books[2]);
	user1->book_borrow(books[3]);
	user1->book_borrow(books[4]);
	user1->book_borrow(books[5]);


	//list of books that user1 borrowed -----> should be books[0],books[1] and books[2]
	user1->list_book_borrow();

	//testing for return books that user1 borrowed
	user1->return_material();
	//testing for remained borrowed books
	cout << endl << "list of the rest of borrowed books: " << endl;
	user1->list_book_borrow();



	//testing for DVD borrow and return
	cout << endl << "<<<<<testing for DVD borrow and return>>>>>" << endl <<endl;

	user *user2;
	user2 = new user();
	user2->test_use_user_setup("user2", "qwertyuiop");

	user2->DVD_borrow(DVDs[0]);
	user2->DVD_borrow(DVDs[1]);
	user2->DVD_borrow(DVDs[2]);
	user2->DVD_borrow(DVDs[3]);

	user2->return_material();






	return 0;
}