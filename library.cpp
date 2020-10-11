#include <iostream>

using namespace std;

int main(){
	int Login = 0;
	int Option = 0;
	cout<< "Hello user! \nWould you like to login as: \n   1. Public\n   2. Staff" <<endl;
	cin >> Login;

	if(Login==1){
		cout<< "You are a Public User!\nWould you like to: \n   1. Borrow a book\n   2. Return a book"<<endl;
	}else if(Login==2){
		cout<< "You are a staff member!\nWould you like to: \n   1. Borrow a book\n   2. Return a book"
		"\n   3. Check Borrowing History\n   4. Add a new book\n   5. Delete a book" <<endl;
	}

	return 0;
}