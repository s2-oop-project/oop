//This is the test of add material
#include<iostream>
#include<string>
#include<vector>
#include"material.h"

extern vector<Ebook> add_ebook(vector<Ebook>);
extern vector<book> add_book(vector<book>);
extern vector<DVD> add_DVD(vector<DVD>);

using namespace std;

int main(){
    vector<Ebook> Ebook_Collection;
    
    vector<book> book_Collection;
    
    vector<DVD>  DVD_Collection;
    
    Ebook_Collection=add_ebook(Ebook_Collection);
    
    book_Collection=add_book(book_Collection);
    
    DVD_Collection=add_DVD(DVD_Collection);
    
    Ebook_Collection=add_ebook(Ebook_Collection);
    
    book_Collection=add_book(book_Collection);
    
    DVD_Collection=add_DVD(DVD_Collection);
    
    for(int i=0;i<2;i++){
        cout<<Ebook_Collection[i].get_material_name()<<" ";
        cout<<book_Collection[i].get_material_name()<<" ";
        cout<<DVD_Collection[i].get_material_name()<<endl;
    }
    return 0;
}
