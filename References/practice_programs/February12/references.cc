//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string food = "Pizza";
  string &meal = food; //Memory address for the food variable.

  cout << &meal << endl; //Printing the memory address.
  cout << food << endl; //Printing the value of the variable. 

}
