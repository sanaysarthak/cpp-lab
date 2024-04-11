// Program in C++ to check whether a number given as input by the user is odd or even

#include <iostream>
using namespace std;

string checkOddEven(int n) {
	if(n % 2 == 0)
		return "even.";
	else
		return "odd.";
}

int main() {
	int n;
	cout << "Enter a positive number: ";
	cin >> n;
	cout << "The number " << n << " is " << checkOddEven(n) << endl;
}
