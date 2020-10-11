#include<iostream>
#include<string>
#include<limits>


int main (){
    int value;
    while (true) { // Loop forever until we 'break'
      if (std::cin >> value) {
        // You have a good int in here
        break; // Done!
      } else {
          std::cout<<"again::";
        // Didn't give a good input
        std::cin.clear(); // Clears error flags which say something bad was input
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Remove anything written on the same line as the bad input
      }
    }
}
//
//while (true) {
//  if (cin >>// ) {
//    break;
//  } else {
//    cout<<"invalid input,please enter again."<<endl;
//    cin.clear();
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//  }
//}
