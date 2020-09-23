//this is the function collection of adding three kind of material by returning the single subject

#include<iostream>
#include<string>
#include<vector>
#include"material.h"

using namespace std;
//
//material add_material(){
//    string Material_name;
//    string Autor_name;
//    cout<<"input your material's name:";
//    cin>>Material_name;
//    cout<<"input Autor's name:";
//    cin>>Autor_name;
//    material new_material;
//    new_material.set_up(Material_name,Autor_name);
//    cout<<endl<<endl<<endl<<"secuessfully add book:"<<endl<<"material name:"<<new_material.material_name<<endl<<"material autor:"<<new_material.autor_name<<endl<<endl;
//    return new_material;
//}

vector<Ebook> add_ebook(vector<Ebook> Ebook_collection){
    string Material_name;
    string Author_name;
    int Page;
    cout<<"Input the title of your Ebook: ";
    getline(cin, Material_name);
    cout<<"Input author's name:";
    getline(cin, Author_name);
    cout<<"Please enter the number of pages: ";
    cin>>Page;
    Ebook new_ebook;
    new_ebook.set_up(Material_name,Author_name);
    new_ebook.set_page_number(Page);
    cout<<endl<<endl<<endl<<"successfully added Ebook:"<<endl<<"Ebook name:"<<new_ebook.material_name<<endl<<"Ebook author:"<<new_ebook.author_name<<endl<<"page number:"<<new_ebook.page_num<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
    Ebook_collection.push_back(new_ebook);
    return Ebook_collection;
}

vector<book> add_book(vector<book> book_collection){
    string Material_name;
    string Author_name;
    int Page;
    cout<<"Input the title of your book: ";
    getline(cin, Material_name);
    cout<<"input author's name:";
    getline(cin, Author_name);
    cout<<"how many page are there in the book:";
    cin>>Page;
    book new_book;
    new_book.set_up(Material_name,Author_name);
    new_book.set_page_number(Page);
    cout<<endl<<endl<<endl<<"successfully add book:"<<endl<<"Book name:"<<new_book.material_name<<endl<<"Book author:"<<new_book.author_name<<endl<<"page number:"<<new_book.page_num<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
    book_collection.push_back(new_book);
    return book_collection;
}


vector<DVD> add_DVD(vector<DVD> DVD_collection){
    string Material_name;
    string Author_name;
    int Len;
    cout<<"Input your DVD's name:";
    getline(cin, Material_name);
    cout<<"Input the director's name:";
    getline(cin, Author_name);
    cout<<"What is the runtime of the DVD? ";
    cin>>Len;
    DVD new_DVD;
    new_DVD.set_up(Material_name,Author_name);
    new_DVD.set_length(Len);
    cout<<endl<<endl<<endl<<"successfully added DVD:"<<endl<<"DVD name:"<<new_DVD.material_name<<endl<<"DVD author:"<<new_DVD.author_name<<endl<<"Length of DVD:"<<new_DVD.length<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
    DVD_collection.push_back(new_DVD);
    return DVD_collection;
}
