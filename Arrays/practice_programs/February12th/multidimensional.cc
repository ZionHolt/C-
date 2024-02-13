//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  int numbers[2][3] = { //Initializing and defining Multi-Dimensional array. 
    {10, 20, 30},
    {40, 50, 60}
  };
  cout << numbers[0][0] << endl; //Printing elements from the Multi-Dimensional array.
  
  cout << numbers[0][2] << endl; //Value before the change.
  numbers[1][2] = 100; //Chaning the value of the element in the array.
  cout << numbers[1][2] << endl; //Value after the change.

  //Looping through a Multi-Dimensional Array
  for (int i = 0; i < 2; i++) {
    for (int j = 0; i < 3; i++) {
      cout << numbers[i][j] << endl;
    }
  }

}

