//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string food = "Pizza"; //Variable declaration and initialization
  string* ptr = &food; //Pointer declaration and initialization
  
  //Output the memory address using pointer variable 
  cout << ptr << endl;
  // Dereference: Output the value of food using the pointer variable
  cout << *ptr << endl;
  //Changing the value of the pointer and outputting the new value
  *ptr = "Cookie";
  cout << *ptr << endl;
  //Output new food variable value
  cout << food << endl;

}
