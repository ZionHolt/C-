//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  int numbers[2][2] = {
    {10, 20},
    {30, 40}
  };
  cout << numbers[0][0] << endl;

  //Changing elements in multidimensional array
  cout << numbers[1][1] << endl;
  numbers[1][1] = 100;
  cout << numbers[1][1] << endl;
}
