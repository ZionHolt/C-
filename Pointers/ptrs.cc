//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string food = "Pizza"; //Declaration and initialization of variable food.
  string* ptr = &food; // Pointer variable that stores the MA of the variable food.
  
  //Output the value of food (Pizza)
  cout << food << endl;
  //Outputs the memory address of the variable food
  cout << &food << endl;
  //Output the memory address using a pointer variable
  cout << ptr << endl;

}
