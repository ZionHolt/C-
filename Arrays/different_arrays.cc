//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string cars[4] = {"Volvo", "Audi", "Benz", "Honda"}; //String array for cars.
  cout << cars[2] << endl; //Printing out third array element. Starts at zero.

//Integer Array
  int random_numbers[5] = {10, 20, 30, 40, 50};
  cout << random_numbers[3] << endl;

//Chaning Specific Array Element
  random_numbers[2] = 60;
  cout << random_numbers[2] << endl;
	
//Looping Through An Array
  int myNumbers[5] = {0, 10, 20, 30, 40};
  for (int i = 0; i < 5; i++){
    cout << myNumbers[i] << endl;
  }

//Omitting Array Size
  int more_numbers[] = {10, 20, 30, 40, 50};
  cout << more_numbers[2] << endl;

//Omitting Elements on Declaration
  string more_strings[2];
  more_strings[0] = "This is a string";
  cout << more_strings[0] << endl;

//Getting Array Size
  cout << "The number of bytes is: " << sizeof(more_numbers) << endl;
}
