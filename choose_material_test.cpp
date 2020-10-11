//this is the test for choosing material;


#include<iostream>
#include<string>
#include<vector>
#include"material.h"

using namespace std;

extern int choose_material(vector<Ebook> Ebook_list, vector<book> book_list, vector<DVD> DVD_list);

int main(){
    vector<Ebook> myevec;
    vector<book>  mybook;
    vector<DVD>   myDVD;
    
    Ebook myEbook;
    myEbook.test_use_material_setup("ebook1","a1");
    myevec.push_back(myEbook);
    myEbook.test_use_material_setup("ebook2","a2");
    myevec.push_back(myEbook);
    myEbook.test_use_material_setup("ebook3","a3");
    myevec.push_back(myEbook);
    
    book my_1_book;
    my_1_book.test_use_material_setup("book1","a1");
    mybook.push_back(my_1_book);
    my_1_book.test_use_material_setup("book2","a2");
    mybook.push_back(my_1_book);
    my_1_book.test_use_material_setup("book3","a3");
    mybook.push_back(my_1_book);
    
    DVD my1dvd;
    my1dvd.test_use_material_setup("D1","a1");
    myDVD.push_back(my1dvd);
    my1dvd.test_use_material_setup("D2","a2");
    myDVD.push_back(my1dvd);
    my1dvd.test_use_material_setup("D3","a3");
    myDVD.push_back(my1dvd);
    
    
    
    int choose;
    choose=choose_material(myevec,mybook,myDVD);
    cout<<choose<<endl;
}
