//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string food = "Ice Cream"; //Food Variable
  string &dessert = food; //Reference to Food Variable

  cout << dessert << endl; //Outputs Ice Cream

  cout << &dessert << endl; //Outputs memory address

}
