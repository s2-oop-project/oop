#include <iostream>
#include "material.h"

using namespace std;

int main(){

	// 1. testing for ebook (name, author, page number)
	{
		Ebook *ebook;
		ebook = new Ebook();
		ebook -> test_use_material_setup("ebook1", "e.author");
		ebook -> set_page_number(100);

		int testpassed = 0;

		if(ebook->get_material_name()!="ebook1"){
			cout << "<<<<< 1-1. test get ebook name failed>>>>>" << endl;
		}else{
			testpassed++;
		}
		
		if(ebook->get_author_name()!="e.author"){
			cout << "<<<<< 1-2. test get ebook author name failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(ebook->get_page_num()!=100){
			cout << "<<<<< 1-3. test get ebook page number failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(testpassed>=3){
			cout << "<<<<< 1. all testing for ebook passed >>>>>" << endl;
		}
	}

	// 2. testing for book (name, author, page number)
	{
		book *book1;
		book1 = new book();
		book1 -> test_use_material_setup("book1", "b.author");
		book1 -> set_page_number(200);

		int testpassed = 0;

		if(book1->get_material_name()!="book1"){
			cout << "<<<<< 2-1. test get book name failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(book1->get_author_name()!="b.author"){
			cout << "<<<<< 2-2. test get book author name failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(book1->get_page_num()!=200){
			cout << "<<<<< 2-3. test get book page number failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(testpassed>=3){
			cout << "<<<<< 2. all testing for book passed >>>>>" << endl;
		}
	}	

	// 2. testing for DVD (name, author, length)
	{
		DVD *DVD1;
		DVD1 = new DVD();
		DVD1 -> test_use_material_setup("DVD1", "D.author");
		DVD1 -> set_length(300);

		int testpassed = 0;

		if(DVD1->get_material_name()!="DVD1"){
			cout << "<<<<< 3-1. test get DVD name failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(DVD1->get_author_name()!="D.author"){
			cout << "<<<<< 3-2. test get DVD author name failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(DVD1->get_length()!=300){
			cout << "<<<<< 3-3. test get DVD length failed>>>>>" << endl;
		}else{
			testpassed++;
		}

		if(testpassed>=3){
			cout << "<<<<< 3. all testing for DVD passed >>>>>" << endl;
		}
	}



}