// Program in C++ to convert temperature in Celsius to Fahrenheit and temperature in Fahrenheit to Celsius

#include <iostream>
using namespace std;

// Function to convert temperature from Celsius to Fahrenheit
double c2f(double cel) {
	double fah = (cel * 1.8) + 32;
	return fah;
}

// Function to convert temperature from Fahrenheit to Celsius
double f2c(double fah) {
	double cel = (fah - 32) * 0.56;
	return cel;
}

int main() {
	int ch;
	cout << "Enter 1 to Convert Celsius to Fahrenheit. \nEnter 2 to convert Fahrenheit to Celsius. \nEnter choice: ";
	cin >> ch;
	printf("\n");

	if(ch == 1) {
		double cel;
		cout << "Enter temperature in Celsius: ";
		cin >> cel;
		int fah = c2f(cel);
		cout << cel << " degrees Celsius equals to " << fah << " degrees Fahrenheit!";
	}

	else if(ch == 2) {
		double fah;
		cout << "Enter temperature in Fahrenheit: ";
		cin >> fah;
		int cel = f2c(fah);
		cout << fah << " degrees Fahrenheit equals to " << cel << " degrees Celsius!";
	}

	else
		cout << "Enter correct choice." << endl;
	return 0;
}
