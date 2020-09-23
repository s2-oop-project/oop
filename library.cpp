#include <iostream>

using namespace std;

int main(){
	int Login = 0;
	int Option = 0;
	int StaffID =1;
	int UserID = 10000;
	char Name[50];

	cout<< "Hello user! \nWould you like to: \n   1. Login as a public user\n   2. Login as a staff member\n 3. Create an account" <<endl;
	cin >> Login;

	if(Login==1){
		cout << "You are a Public User!\nWould you like to: \n   1. Borrow a book\n   2. Return a book"<<endl;
	}else if(Login==2){
		cout << "You are a staff member!\nWould you like to: \n   1. Borrow a book\n   2. Return a book"
		"\n   3. Check Borrowing History\n   4. Add a new book\n   5. Delete a book" <<endl;
	}else if(Login==3){
		cout << "Are you registering as:\n   1. Staff\n   2. Public User"<<endl;
		cin >> Option; 
		if (Option == 1){
			cout << "Please enter your name" << endl;
			cin >> Name;
			cout << "Hello: "<<Name;
			cout << "You are User: " <<UserID
		else if(Login==2){
			cout << "Please enter your name" << endl;
			cin >> Name;
			cout << "Hello: "<<Name;
			cout << "Your staff ID is: "<<StaffID

	return 0;
}
