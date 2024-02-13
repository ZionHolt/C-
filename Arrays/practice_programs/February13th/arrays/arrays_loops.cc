//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  int numbers[3] = {10, 20, 30};
  cout << numbers[1] << endl; //Should print the number twenty.

  numbers[1] = 100; //Accessing the elements in an array.
  cout << numbers[1] << endl; //Printing the element after changing its value.

  //Looping through the values of an array
  cout << " \nValues of the array: " << endl;
  for (int i = 0; i < 3; i++) {
    cout << numbers[i] << endl;
  }

  //For-each loop (exclusively for looping through elements in an array)
  cout << "Values of the array using a for-each loop: " << endl;
  for (int i : numbers) {
    cout << i << endl;
  }
  
  //Array without giving size at declaration
  int omitting_size[] = {10, 20, 30, 40, 50};
  
  //Array size in bytes
  cout << sizeof(omitting_size) << endl;

  //Array size as an integer
  int arrayLength = sizeof(omitting_size) / sizeof(int);
  cout << "Array size as an integer is: " << arrayLength << endl;

  
}
