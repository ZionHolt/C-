//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string food = "pizza";
  string &meal = food;
  string* ptr = &meal;
  cout << ptr << endl; //Printing the memory address added to the ptr variable


}
