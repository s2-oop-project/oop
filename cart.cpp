#include <iostream>
#include "cart.h"
#include "meerkat.h"

using namespace std;

cart::cart(){
	i=0;
}                        


cart::~cart(){

}

// adds a meerkat to the cart, returns false if full
bool cart::addMeerkat(meerkat cat){

	bool full = true;

	if(i<4){
		cart_for_meer[i] = cat;
		i++;
		return full;
	}else{
		cout << "error! the cart is full" << endl;
		return false;
	}

	return full;
}   

// remove all meerkats from the cart
void cart::emptyCart(){
	i=0;
}          

// print the name, a space, the age, then a new line
// for each meerkat in the order they were added
void cart::printMeerkats(){

	if(i<4){
		for(int j=0; j<i; i++){
			cout << cart_for_meer[i].getName() << " " << cart_for_meer[i].getAge() << endl;
		}
	}


}         
