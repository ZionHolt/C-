//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string food = "apple";
  string &meal = food; //Reference variable that is a reference to food.
  cout << meal << endl; //When printing with reference variable, don't add operator.

  //Memory Address
  int number = 10;
  cout << &number << endl; //Prints the memory address of the variable 'number'.
			   //Format of memory address is hexadecimal. 
}
