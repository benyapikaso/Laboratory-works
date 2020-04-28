#include <iostream>
using namespace std;

int zero_small(int &num1, int &num2)
{
	if (num1 < num2) 
		num1 = 0;
	else if (num1 > num2)
		num2 = 0;
	return 0;
}

int main()
{
	int num1 , num2;
	cout << "Enter two numbers, less than zero\n";
	cin >> num1 >> num2;
	zero_small(num1, num2);
	cout << num1 << " " << num2;
	return 0;
}


