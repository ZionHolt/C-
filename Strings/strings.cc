//Copright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
  string greeting = "Hello! ";
  string firstName = "John ";
  string lastName = "Doe ";

  //cout << greeting << firstName << lastName;
  //Concatenate Strings
  string fullName = firstName + lastName;
  cout << fullName << endl;

  //Appending Strings
  string sameName = firstName.append(lastName);
  cout << sameName << endl;

  //String Length
  cout << "The Length of the \"sameName\" string is: " << sameName.length() << endl;
  cout << "The Length of the \"sameName\" string is: " << sameName.size() << endl; //Same as above
  
  //Special Characters
  string vikings = "We are the so-called \"Vikings\" from the north.";
  // The \ turns special characters into string characters (See Above).
   
  //User Input
  string user_Input = " ";
  cin >> user_Input; // Get user input from keyboard for string.
  cout << user_Input;

}

