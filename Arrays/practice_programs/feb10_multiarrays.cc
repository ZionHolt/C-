//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  int numbers[2][3] = { //Multidimensional Array with two dimensions.
    {20, 40, 60},
    {10, 30, 50}
  }; //Remember the semicolon here.
  cout << numbers[1][1] << endl;

  //Changing the elements in a multidimensional array
  numbers[0][0] = 100;
  cout << numbers[0][0] << endl;

  //Looping through a multidimensional array
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << numbers[i][j] << endl;
    }
  }
  //Complete!
}
