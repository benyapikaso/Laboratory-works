#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, s;
  cout << "Enter the sides of the triangle\n";
  cin >> a >> b >> c;
  s=(a+b+c) / 2;

  if(a>b+c || b>a+c || c>b+a) {
    cout << "The sides of the triangle are invalid";
  } else {
    cout << sqrt(s*(s-a)*(s-b)*(s-c));
  }

}