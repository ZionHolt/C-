//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int adding(int x, int y);

int main() {
  int x = 10, y = 20;  
  cout << adding(x,y) << endl;
}

int adding(int x, int y) {
  return x + y;
}
