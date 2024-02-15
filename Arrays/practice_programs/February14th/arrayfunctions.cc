//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::endl;
#include<cstdlib>
#include"arrayfunctions.h"

bool Populate(int the_array[], int size, int min, int max) {
  if (min > max )
    return false;
  for ( int i = 0; i < size; ++i ) {
    the_array[i] = rand() % (max - min + 1) + min;
  return true;
  }
}
