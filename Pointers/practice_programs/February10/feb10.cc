//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string food = "Pizza";
  cout << food << endl;
  cout << &food << endl;

  string* ptr = &food; //Pointer variable named ptr that stores memory address of food variable.
  cout << ptr << endl;


}
