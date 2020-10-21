// this program is about the list of materials that library possesses.

#include <iostream>
#include <string>
#include <vector>
#include "material.h"

using namespace std;

// list of ebooks
vector<Ebook> list_of_ebook(vector<Ebook> Ebook_list){
	Ebook ebook;

	string ebook_names[10] = {"The Cipher", "If You Tell", "I Promise You", "Please Like Me", "Spellbreaker", 
								"Harry Potter", "Frozen", "The Secret Lake", "The Hobbit", "Pete the Cat"};
	string ebook_authors[10] = {"Isabella Maldonado","Gregg Olsen","Ilsa Madden-Mills","Mindy Kaling","Charlie",
								"J.K.Rowling","Disney Books","Karen Inglis","Tolkien","James Dean"};
	int page_nums[10] = {320, 256, 420, 180, 160, 333, 256, 98, 390, 679};
	
	for(int i=0; i<10; i++){
		ebook.test_use_material_setup(ebook_names[i], ebook_authors[i]);
		ebook.set_page_number(page_nums[i]);
		Ebook_list.push_back(ebook);
	}

	return Ebook_list;
}

// list of books
vector<book> list_of_book(vector<book> book_list){
	book book;
	string book_names[10] = {"To Kill a Mockingbird", "1984", "The Lord of the Rings", "The Great Gatsby", "Pride and Prejudice", 
							"The Diary Of A Young Girl", "The Book Thief", "The Hobbit", "Little Women", "The Little Prince"};
	string book_author[10] = {"Harper Lee", "George Orwell", "J.R.R.Tolkien", "F.Scott", "Jane Austen", 
							"Anne Frank", "Markus Zusak", "J.R.R.Tolkien", "Louisa May Alcott", "Saint-Exupery"};
	int page_nums[10] = {345, 657, 583, 456, 278, 240, 765, 345, 876, 190};


	for(int i=0; i<10; i++){
		book.test_use_material_setup(book_names[i], book_author[i]);
		book.set_page_number(page_nums[i]);
		book_list.push_back(book);
	}
	return book_list;
}

//list of dvds
vector<DVD> list_of_DVD(vector<DVD> DVD_list){
	DVD dvd;
	string dvd_names[10] = {"The Lion King", "Finding Nemo", "Beauty and the Beast", "Avatar", 
							"Spider Man", "Jurassic Park", "Shrek", "Iron Man", "The Jungle Book", "300"};
	string dvd_author[10] = {"Roger Allers", "Andrew Stanton", "Gary Trousdale", "James Cameron", "Sam Raimi", 
							"Steven Spielberg", "Andrew Adamson", "Jon Favreau", "Reitherman", "Zack Snyder"};
	int dvd_len[10] = {235, 356, 425, 311, 267, 167, 135, 389, 409, 670};

	for(int i=0; i<10; i++){
		dvd.test_use_material_setup(dvd_names[i], dvd_author[i]);
		dvd.set_length(dvd_len[i]);
		DVD_list.push_back(dvd);
	}
	return DVD_list;
}
