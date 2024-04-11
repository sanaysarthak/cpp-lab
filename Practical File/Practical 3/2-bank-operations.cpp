// Program in C++ to perform simple Bank operations
/* Perform the following operations:
	1. Deposit
	2. Withdrawal
	3. Display 
	4. Exit
*/

#include <iostream>
using namespace std;

// Initializing a global variable for bank account balance with 0
int acc_balance = 0; 

void deposit_money() {
	int deposit_amt;
	cout << "Enter amount to be deposited: ";
	cin >> deposit_amt;
	acc_balance += deposit_amt;
	cout << "Rs. " << deposit_amt << " deposited to bank account successfully!\n";
}

void withdraw_money() {
	int withdraw_amt;
	cout << "Enter the withdrawal amount: ";
	cin >> withdraw_amt;
	if(acc_balance < withdraw_amt)
		cout << "Insufficient Funds in your bank account! Cannot perform Withdrawal of Rs. " << withdraw_amt << endl;
	else {
		acc_balance -= withdraw_amt;
		cout << "Withdrawal of Rs. " << withdraw_amt << " from your bank account is successfull.\n";
	}
}

void display_acc_balance() {
	cout << "Your account balance is Rs. " << acc_balance << endl;
}

int main() {
	int ch;
	cout << "Bank Operations:-" << endl;

	do {
		cout << "\nEnter 1 to DEPOSIT Money.\n" << "Enter 2 to WITHDRAW Money.\n" << "Enter 3 to DISPLAY Account Balance.\n" << "Enter 0 to EXIT.\n" << "Enter Choice: ";
		cin >> ch;
		switch(ch) {

			case 1:
				deposit_money();
				break;

			case 2:
				withdraw_money();
				break;

			case 3:
				display_acc_balance();
				break;

			case 0:
				cout << "\nExited the program successfully!";
				break;

			default:
				cout << "Enter the correct choice.\n";
				break;

		}
	} while(ch != 0);
	
	return 0;
}
