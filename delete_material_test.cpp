//This is the test of delete material

#include<iostream>
#include<string>
#include<vector>
#include"material.h"


extern vector<Ebook> add_ebook(vector<Ebook>);
extern vector<book> add_book(vector<book>);
extern vector<DVD> add_DVD(vector<DVD>);
extern vector<Ebook> delete_ebook(vector<Ebook>, string);
extern vector<book> delete_book(vector<book>, string);
extern vector<DVD> delete_DVD(vector<DVD>, string);

using namespace std;

int main(){
    vector<Ebook> Ebook_Collection;
    vector<book> book_Collection;
    vector<DVD>  DVD_Collection;
    vector<Ebook> Delete_ebook;
    vector<book> Delete_book;
    vector<DVD> Delete_DVD;


    Ebook_Collection=add_ebook(Ebook_Collection);
    book_Collection=add_book(book_Collection);
    DVD_Collection=add_DVD(DVD_Collection);
    Delete_ebook=delete_ebook(Ebook_Collection, "A");
    Delete_book=delete_book(book_Collection, "A");
    Delete_DVD=delete_DVD(DVD_Collection, "A");

    // Ebook_Collection=add_ebook(Ebook_Collection);
    // book_Collection=add_book(book_Collection);
    // DVD_Collection=add_DVD(DVD_Collection);
    // Delete_ebook=delete_ebook(Ebook_Collection, "B");

    // for(int i=0;i<2;i++){
    //     cout<<Ebook_Collection[i].get_material_name()<<" ";
    //     cout<<book_Collection[i].get_material_name()<<" ";
    //     cout<<DVD_Collection[i].get_material_name()<<endl;
    //     cout<<Delete_ebook[i].get_material_name()<<endl;
    // }

    cout<<Ebook_Collection[0].get_material_name()<<" ";
    cout<<book_Collection[0].get_material_name()<<" ";
    cout<<DVD_Collection[0].get_material_name()<<endl;
    cout<<Delete_ebook[0].get_material_name()<<" ";
    cout<<Delete_book[0].get_material_name()<<" ";
    cout<<Delete_DVD[0].get_material_name()<<endl;

    return 0;
}
