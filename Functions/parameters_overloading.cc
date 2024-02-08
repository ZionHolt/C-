//Copryight 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int adding_numbers(int x = 10, int y = 30);

int main() {
  cout << "This is one of the sentences of all time" << endl;
  int x = 20, y = 10;
  cout << adding_numbers(x, y) << endl;
  cout << adding_numbers() << endl;
  return 0;
}

int adding_numbers(int x, int y) { // function declaration. x and y are parameters.
  return x + y; // definition of the function
}

double adding_numbers(double x, double y) { // function declaration for overloading.
  return x + y; // definition of the function
}	 

