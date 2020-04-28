#include <iostream>

using namespace std;
int main (){
int num;

cout << "Enter a number to check ";
cin >> num;

if (num < 0) {  
    cout << "The number is negative" << endl;
} else if (num == 0) {
    cout << "This is zero" << endl;
} else {  
    cout << "The number is positive" << endl;
}
  
} 