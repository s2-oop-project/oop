#include<iostream>
#include<string>
#include"material.h"
#include<vector>

using namespace std;

int main(){

	// set up materials
	// Ebook
	Ebook ebook1, ebook2, ebook3;
	ebook1.test_use_material_setup("ebook1", "e.author1");
	ebook2.test_use_material_setup("ebook2", "e.author2");

	// book
	book book1, book2;
	book1.test_use_material_setup("book1", "b.author1");

	// DVD
	DVD DVD1, DVD2;
	DVD1.test_use_material_setup("DVD1", "d.author1");





	//1. testing about ebook
	// testing for borrow material
	ebook1.borrow_material("user1");
	ebook1.borrow_material("user2");
	ebook1.borrow_material("user3");
	ebook1.borrow_material("user4");
	ebook1.borrow_material("user5");

	ebook2.borrow_material("user1");
	material *eb1 = &ebook1;
	material *eb2 = &ebook2;

	// testing for check history
	/* if including this part in material.cpp

	void Ebook::check_history(){
	    cout << "This is the number of Ebooks that people have downloaded so far: ";
	    cout << download_count << endl;
	    cout<<"___________________________________"<<endl;
	}
	*/
	cout << endl << "<<<<<<<<<<<<<<<testing for check_history(ebook)>>>>>>>>>>>>>>>>" << endl;
	cout << "check history for ebook1: " << endl;
	eb1->check_history();

	cout << "check history for ebook2: " << endl;
	eb2->check_history();

	// testing for add new material
	cout << endl << endl << "<<<<<<<<<<<<<<<<<testing for add material(ebook)>>>>>>>>>>>>" << endl << endl;
	material *eb3 = &ebook3;
	eb3->add_new_material();
	cout << "The name of ebook you added: " << eb3->get_material_name() << endl;
	cout << "The author of ebook you added: " << eb3->get_author_name() << endl;

	// testing for return
	cout << endl << endl << "<<<<<<<<<<<<<<<<<testing for return(ebook)>>>>>>>>>>>>>>" << endl << endl;
	eb2->return_material();
	bool situation = eb1->get_situation();
	if(situation==true){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}




	//2. testing about book and DVD
	// testing for borrow material
	book1.borrow_material("user1");
	book1.borrow_material("user2");
	book1.borrow_material("user3");

	DVD1.borrow_material("user1");
	DVD1.borrow_material("user2");

	material *b1 = &book1;
	material *D1 = &DVD1;

	// testing for check history
	cout << endl << endl << endl << "<<<<<<<<<<<<<<<<<<testing for check history(book, DVD)>>>>>>>>>>>>>>>>>>" << endl << endl;
	cout << "check history for book1: " << endl;
	b1->check_history();

	cout << endl << "check history for DVD1: " << endl;
	D1->check_history();

	// testing for add new material
	cout << endl << endl << "<<<<<<<<<<<<<<<<<<<testing for add new material(book, DVD)>>>>>>>>>>>>>>>>>>>>" << endl << endl;
	material *b2 = &book2;
	material *D2 = &DVD2;
	b2->add_new_material();
	D2->add_new_material();

	// testing for return 



	return 0;
}
