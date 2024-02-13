//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  int numbers[2] = {10, 20}; //Regular integer array called numbers.
  cout << "30 - 10 is " << numbers[1] << endl; //Accessing the elements of an array.
  
  numbers[1] = 40; //Changing array element 
  cout << "30 + 10 is " << numbers[1] << endl;

  for (int i = 0; i < 2; i++) { //Looping through an array using for-loop
    cout << numbers[i] << endl;
  }

  for (int i : numbers) { //for-each loop is used exclusively for looping arrays
    cout << i << "\n";
  }
  
  int more_numbers[] = {10, 20, 30, 40}; //omitting size on declaration
  cout << sizeof(more_numbers); //Getting the size of an array in bytes.
}
