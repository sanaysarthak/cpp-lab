// Program in C++ to enter elements in an array as inputs from the user and then display it.

#include <iostream>
using namespace std;

int main() {

	// Taking size of the array, as input from the user
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	
	// Taking elements as input from the user
	int arr[size];
	cout << "Enter elements in the array:-\n";
	for(int i=0; i<size; i++) {
		cout << "Enter element at index " << i << " : ";
		cin >> arr[i];
	}

	// Displaying the array
	cout << "\n\nThe array is:-\n";
	for(int i=0; i<size; i++) {
		cout << arr[i] << "\t";
	}

	return 0;
}
