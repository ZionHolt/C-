//Copyright 2024 ZHOLT

#include"hellofunctions.h"

bool IsPrime(int n) {
  if ( n < 2 )
    return false;
  bool found_divisor = false;
  for (int i = 2; i < n && !found_divisor; i++)
    found_divisor = n % i == 0;
  return !found_divisor;
}
