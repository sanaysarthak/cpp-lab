// Program in C++ to perform 3x3 Matrix Multiplication
// Take elements of the matrix as input from the user

/* Sample Input:-
A : 2 3 4 3 5 6 4 5 3                 B: 1 2 1 -1 2 1 3 2 1
                                                
In matrix form: 2 3 4                 In matrix form: 1 2 1
                3 5 6                                -1 2 1
                4 5 3                                 3 2 1
                
Output:-
11 18 9
16 28 14
8 24 12
*/

#include <iostream>
using namespace std;

int main() {
	int a[3][3], b[3][3], c[3][3];

	// Taking elements of the first matrix as input from the user
	cout << "Enter the values for the first matrix." << endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << "Enter value at " << i << j << " position: ";
			cin >> a[i][j];
		}
	}

	// Displaying the first matrix in the tabular form
	cout << "\nMatrix A is as follows:-\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << a[i][j] << "  ";
		}
		cout << "\n";
	}

	// Taking elements of the second matrix as input from the user
	cout << "\nEnter the values for the second matrix." << endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << "Enter value at " << i << j << " position: ";
			cin >> b[i][j];
		}
	}

	// Displaying the second matrix in the tabular form
	cout << "\nMatrix B is as follows:-\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << b[i][j] << "  ";
		}
		cout << "\n";
	}

	// Peforming the Matrix Multiplication and printing the product
	cout << "\nOn Multiplication of Matrix A and B, we get:-\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			c[i][j] = 0;
			for(int k=0; k<3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j] << "  ";
		}
		cout << "\n";
	}

	return 0;
}
