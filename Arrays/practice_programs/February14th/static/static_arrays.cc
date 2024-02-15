//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  //Below is a static array. In these, the size is set when the array is declared.
  //This size is not changed during the course of the program. 
  int numbers[5] = {10, 20, 30, 40, 50}; 
  //Accessing array element.
  cout << numbers[2] << " is the answer to 10 + 20." << endl;
  //Changing array element.
  numbers[4] = 100;
  cout << numbers[4] << endl;

  //Leaving out the array size when declaring it.
  int my_array[] = {20, 40, 60, 80, 100};

  //Reading values into a non-character array.
  for(int i = 0; i < 5; i++){
    cout << "Enter next number: ";
    cin >> my_array[i];
  }
  //Printing the output of the array using a for-each loop.
  for (int i : my_array) {
    cout << i << endl;
  }
}
