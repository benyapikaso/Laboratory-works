#include <iostream>
using namespace std;

int main() {
  int num, y, yy, m, d;

  cout << "Enter a number ";
  cin >> num;
  y = num / 365;
  yy = num % 365; 
  m = yy / 30;
  d = yy % 30;
  
  cout << y << " - Years; " << m << " - Months; " << d << " - Days; "; 
}