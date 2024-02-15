//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include<cstdlib>
#include"arrayfunctions.h"

int main() {
  const int a_size = 15;
  double some_reals[a_size] = {2.3, 6.7, -4.97};

  cout << some_reals[1] << endl;
  cout << some_reals[10] << endl; //Prints zero since not defined initially

  for( int i = 0; i < a_size; ++i ) {
    cout << "some_reals[" << i << "] = " << some_reals[i] << endl;
  }
  
  cout << sizeof(double) << endl; //Tells you the size that a double takes up.
  cout << some_reals + 1 << endl;

  const int some_ints[a_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
	 			 12, 13, 14, 15};
  
}
