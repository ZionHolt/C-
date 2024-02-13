//Copyright 2024 ZHOLT
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void printingCountries(string country = "United States") {
	cout << country << endl;
}

int main() {
  printingCountries("Norway");
  printingCountries("Sweden");
  printingCountries("Japan");
  printingCountries();
  return 0;
}
