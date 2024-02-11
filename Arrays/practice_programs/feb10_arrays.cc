//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  int numbers[] = {20, 40, 60, 80, 100}; //Integer Array
  cout << "20 + 60 is: " << numbers[3] << endl; //Accessing element of an array

  numbers[3] = 120;
  cout << "60 + 60 = " << numbers[3] << endl; //Change an Array Element

  //Looping through an array
  for (int i = 0; i < 5; i++) {
    cout << numbers[i] << endl;
  }

  //Omitting size on Declaration
  int more_numbers[] = {10, 20, 30, 40, 50};
  
  //Adding elements later
  int final_numbers[1]; //Can add elements later but array must have a size
  final_numbers[0] = 100;
  cout << final_numbers[0] << endl;

  //Getting Array Size in Bytes
  cout << "The size of more_numbers in bytes is: " << sizeof(more_numbers) << endl;
  cout << "This is because each int is worth 4 bytes, so 4*5=20" << endl;
  
  //Getting True Array Size
  int getArrayLength = sizeof(more_numbers) / sizeof(int);
  cout << "The size of the array is: " << getArrayLength << endl;
}
