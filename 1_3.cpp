#include <iostream>

int main() {
  float c, f;
  std::cout << "Enter the temperature in Fahrenheit\n";
  std::cin >> f;
  c = (f - 32) / 1.8;
  std::cout << "Temperature in Celsius = " << c;
}