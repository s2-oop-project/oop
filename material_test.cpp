#include <iostream>
#include "material.h"

using namespace std;

int main(){

	// Ebook
	// set up ebook name, author and page number

	Ebook ebooks[5];
	string ebook_names[5] = {"ebook1", "ebook2", "ebook3", "ebook4", "ebook5"};
	string ebook_authors[5] = {"AAAAA", "BBBBB", "CCCCC", "DDDDD", "EEEEE"};
	int ebook_pages[5] = {100, 200, 300, 400, 500};

	int size_of_ebook = sizeof(ebooks)/sizeof(ebooks[0]);

	for(int i=0; i<size_of_ebook; i++){
		ebooks[i].test_use_material_setup(ebook_names[i], ebook_authors[i]);
		ebooks[i].set_page_number(ebook_pages[i]);
	}

	// print out the information of ebooks
	for(int i=0; i<size_of_ebook; i++){
		cout << i+1 <<". Ebook name : " << ebooks[i].get_material_name() << ", author : " << ebooks[i].get_author_name() << ", pages : " << ebooks[i].get_page_num() <<endl;
	}

	cout << "-------------------------------------------------------------------------" << endl << endl;


	// book
	// set up book name, author and page number

	book books[3];
	string book_names[3] = {"book1", "book2", "book3"};
	string book_authors[3] = {"aaaaa", "bbbbb", "ccccc"};
	int book_pages[3] = {300, 200, 100};

	int size_of_book = sizeof(books)/sizeof(books[0]);

	for(int i=0; i<size_of_book; i++){
		books[i].test_use_material_setup(book_names[i], book_authors[i]);
		books[i].set_page_number(book_pages[i]);
	}

	// print out the information of books
	for(int i=0; i<size_of_book; i++){
		cout << i+1 <<". Book name : " << books[i].get_material_name() << ", author : " << books[i].get_author_name() << ", pages : " << books[i].get_page_num() <<endl;
	}

	cout << "-------------------------------------------------------------------------" << endl << endl;


	// DVD
	// set up DVD name, author and length

	DVD DVDs[4];
	string DVD_names[4] = {"DVD1", "DVD2", "DVD3", "DVD4"};
	string DVD_authors[4] = {"AAaaa", "BBbbb", "CCccc", "DDddd"};
	int DVD_len[4] = {60, 220, 100, 365};

	int size_of_DVD = sizeof(DVDs)/sizeof(DVDs[0]);

	for(int i=0; i<size_of_DVD; i++){
		DVDs[i].test_use_material_setup(DVD_names[i], DVD_authors[i]);
		DVDs[i].set_length(DVD_len[i]);
	}

	// print out the information of DVDs
	for(int i=0; i<size_of_DVD; i++){
		cout << i+1 <<". DVD name : " << DVDs[i].get_material_name() << ", author : " << DVDs[i].get_author_name() << ", pages : " << DVDs[i].get_length() <<endl;
	}

	cout << "-------------------------------------------------------------------------" << endl << endl;



	return 0;
}