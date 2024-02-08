//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  //Looping through an array without specifying array size.
  int more_integers[5] = {20, 40, 60, 80, 100};
  for (int i : more_integers) {
	  cout << i << endl;
  }
  //Multidimensional Arrays
  int numbers[4][5] = { //Four and Five are in what is known as dimensions.
    {20, 40, 60, 80, 100}, //An array can have any number of dimensions. 
    {30, 60, 90, 120, 150},
    {10, 20, 30, 40, 50}, 
    {1, 2, 3, 4, 5}
  }; 
  
  //Accessing Elements of a Multi=Dimensional Array
  cout << numbers[1][2] << endl; // Remember, Arrays start at zero.

  //Changing elements in Multi-Dimensional Array
  cout << numbers[1][0] << endl;
  numbers[1][0] = 35; 
  cout << numbers[1][0] << endl;

  cout << "The following is a Multi-Dimensional Array: " << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      cout << numbers[i][j] << endl;
    }
  }
}
