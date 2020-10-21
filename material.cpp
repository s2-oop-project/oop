//this is the cpp file for material class function:
//    material(abstract)
//    book
//    ebook
//    DVD

#include<iostream>
#include<string>
#include"material.h"
#include<vector>

using namespace std;

//material
//initialize
material::material(){
    material_name="none";
    author_name="none";
    situation=true;
}


//normal behavior


//change of material when it return
void material::return_material(){
    situation=true;
}
void material::borrow_material(string borrow_user){
    
}

void material::check_history(){
    
}

void material::test_use_material_setup(string t_name,string t_author){
    
}

void material::add_new_material(){
    
}








//get behavior
string material::get_material_name(){
    return material_name;
}
string material::get_author_name(){
    return author_name;
}
bool material::get_situation(){
    return situation;
}

vector<string> material::get_borrow_user_list(){
    return borrow_user_list;
}

material::~material(){

}









//ebook
Ebook::Ebook():material()
{

    page_num=0;
    download_count=0;
}

void Ebook::test_use_material_setup(string t_name,string t_author){
    material_name=t_name;
    author_name=t_author;
    situation=true;
    page_num=55;
    download_count=0;
}

void Ebook::set_page_number(int Page){
    page_num=Page;
}


int Ebook::get_page_num(){
    return page_num;
}

//when someone borrow the ebook
void Ebook::borrow_material(string borrow_user){
    download_count+=1;
}

//new define the ebook
void Ebook::add_new_material(){
    material_name="none";
    author_name="none";
    situation=true;
    cout<<"input your ebook's name:";
    cin>>material_name;
    cout<<"input Author's name:";
    cin>>author_name;
    cout<<"how many page are there in the ebook:";
    cin>>page_num;
    cout<<endl<<endl<<endl<<"secuessfully add Ebook:"<<endl<<"Ebook name:"<<material_name<<endl<<"Ebook author:"<<author_name<<endl<<"page number:"<<page_num<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
}




//count
int Ebook::get_download_count(){
    return download_count;
}

void Ebook::check_history(){
    cout<<"material name: "<<material_name<<endl;
    cout << "This is the the of Ebooks that people have downloaded so far: "<<endl;
    cout << download_count << endl;
    cout<<"___________________________________"<<endl;
}

Ebook::~Ebook(){

}






//book
book::book():material()
{

    page_num=0;
}


void book::test_use_material_setup(string t_name,string t_author){
    material_name=t_name;
    author_name=t_author;
    situation=true;
    page_num=55;
}

void book::add_new_material(){
    cout<<"input your book's name:";
    cin>>material_name;
    cout<<"input Author's name:";
    cin>>author_name;
    cout<<"how many page are there in the book:";
    cin>>page_num;
    cout<<endl<<endl<<endl<<"secuessfully add book:"<<endl<<"Book name:"<<material_name<<endl<<"Book author:"<<author_name<<endl<<"page number:"<<page_num<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
}

void book::set_page_number(int Page){
    page_num=Page;
}

//when someone borrow book
void book::borrow_material(string borrow_user){
    situation=false;
    borrow_user_list.push_back(borrow_user);
}

int book::get_page_num(){
    return page_num;
}

void book::check_history(){
    cout<<"material name: "<<material_name<<endl;
    cout<<"This is the people list who borrowed this book before:"<<endl;
    for(int i=0;i<borrow_user_list.size();i++){
        cout<<borrow_user_list[i]<<endl;
    }
    cout<<"___________________________________"<<endl;
}

book::~book(){

}





//DVD
DVD::DVD():material()
{
    length=0;
}

void DVD::set_length(int Len){
    length=Len;
}

void DVD::test_use_material_setup(string t_name,string t_author){
    material_name=t_name;
    author_name=t_author;
    situation=true;
    length=55;
}

//when someone borrow DVD
void DVD::borrow_material(string borrow_user){
    situation=false;
    borrow_user_list.push_back(borrow_user);
}

int DVD::get_length(){
    return length;
}


void DVD::add_new_material(){
    cout<<"input your DVD's name:";
    cin>>material_name;
    cout<<"input Author's name:";
    cin>>author_name;
    cout<<"how long is the DVD time :";
    cin>>length;
    cout<<endl<<endl<<endl<<"secuessfully add DVD:"<<endl<<"DVD name:"<<material_name<<endl<<"DVD author:"<<    author_name<<endl<<"Length of DVD:"<<length<<endl<<endl<<"——————————————————————————————————————————————"<<endl;
}


void DVD::check_history(){
    cout<<"material name: "<<material_name<<endl;
    cout<<"This is the people list who borrow this DVD before:"<<endl;
    for(int i=0;i<borrow_user_list.size();i++){
        cout<<borrow_user_list[i]<<endl;
    }
    cout<<"___________________________________"<<endl;
}

DVD::~DVD(){
    
}