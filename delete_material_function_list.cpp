// This is for deleting the specific materials from Ebook, book or DVD 

#include<iostream>
#include<string>
#include<vector>
#include"material.h"

using namespace std;

vector<Ebook> delete_ebook(vector<Ebook> Ebook_collection, string delete_Ebook_name){
	string Material_name;
	string Author_name;
	int Page;


	int size = Ebook_collection.size();
	int i=0;



	while(i<size){
		if(Ebook_collection[i].get_material_name()  == delete_Ebook_name){
			Material_name = " ";
			Author_name = " ";
			Page = 0;

			Ebook_collection[i].set_up(Material_name, Author_name);
			Ebook_collection[i].set_page_number(Page);
			cout<<endl<<endl<<endl<<"secuessfully delete Ebook:"<<endl<<"Ebook name:"<<Ebook_collection[i].material_name<<endl<<"Ebook author:"<<Ebook_collection[i].author_name<<endl<<"page number:"<<Ebook_collection[i].page_num<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
		}
		i++;
	}


	return Ebook_collection;
}



vector<book> delete_book(vector<book> book_collection, string delete_book_name){
	string Material_name;
	string Author_name;
	int Page;

	int size = book_collection.size();
	int i=0;

	while(i<size){
		if(book_collection[i].get_material_name() == delete_book_name){
			Material_name = " ";
			Author_name = " ";
			Page = 0;

			book_collection[i].set_up(Material_name, Author_name);
			book_collection[i].set_page_number(Page);
			cout<<endl<<endl<<endl<<"secuessfully delete book:"<<endl<<"book name:"<<book_collection[i].material_name<<endl<<"book author:"<<book_collection[i].author_name<<endl<<"page number:"<<book_collection[i].page_num<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
		}
		i++;
	}


	return book_collection;

}



vector<DVD> delete_DVD(vector<DVD> DVD_collection, string delete_DVD_name){
	string Material_name;
	string Author_name;
	int Len;

	int size = DVD_collection.size();
	int i=0;

	while(i<size){
		if(DVD_collection[i].get_material_name() == delete_DVD_name){
			Material_name = " ";
			Author_name = " ";
			Len = 0;

			DVD_collection[i].set_up(Material_name, Author_name);
			DVD_collection[i].set_length(Len);
			cout<<endl<<endl<<endl<<"secuessfully delete DVD:"<<endl<<"DVD name:"<<DVD_collection[i].material_name<<endl<<"DVD author:"<<DVD_collection[i].author_name<<endl<<"length:"<<DVD_collection[i].length<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
		}
		i++;
	}


	return DVD_collection;
}