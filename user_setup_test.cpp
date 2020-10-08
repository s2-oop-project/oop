#include <iostream>
#include "material.h"
#include "user.h"
#include <string>

using namespace std;

int main(){

	// 1. test for setting up account

	//set up account(name, password) for user 
	user users[3];
	int user_size = sizeof(users)/sizeof(users[0]);

	for(int i=0; i<user_size; i++){
		users[i].set_up_account();
	}

	//print out user information (ID, name and password)
	cout << endl << "<<<testing for printing out user information which is set up in the system>>>" << endl;
	for(int i=0; i<user_size; i++){
		cout << i+1 << ". user ID: " << users[i].get_user_ID() << ", user name: "<< users[i].get_user_name() << ", user password: " << users[i].get_user_password() << endl;
	}




	// 2. test for changing password
	cout << endl << "<<<testing for changing user1 password>>>" << endl << endl;
	users[1].change_user_password();
	cout << endl <<"new password for user1: " << users[1].get_user_password() << endl;



	return 0;
}