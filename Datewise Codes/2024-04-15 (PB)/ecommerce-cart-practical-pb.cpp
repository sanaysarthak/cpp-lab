// Write a program in C++ using the concepts of OOPS,to demonstrate the implementation of a cart for an e-commerce service where the user can add an item, display the total price and delete individual items as well.

// Bug to be fixed:
// Insert 3 products, then display them, then remove any 1 item, and again add another product, problem is that, the price of the new product is added, but the name does not get printed and the price returns a garbage value, when displaying it using the display() function.

#include <iostream>
using namespace std;

class ShoppingCart {
	private:
		string productName;
		float productPrice;

	public:
		static int counter;
		static float totPrice;
		void addItem() {
			counter++;
			cout << "\nEnter product name: ";
			cin.ignore();
			getline(cin, productName);
			cout << "Enter price: ";
			cin >> productPrice;
			totPrice += productPrice;
		}

		void displayItems() {
			if(productName != "" && productPrice != 0.0) 
				cout << productName << "\t\t" << productPrice << endl;
		}

		void removeItems() {
			productName = "";
			totPrice -= productPrice;
			productPrice = 0.0;
			cout << "Product removed successfully!" << endl;
		}

		void totalPrice() {
			cout << "\nYour total cart value is: Rs. " << totPrice << endl;
		}
}; int ShoppingCart :: counter = 0;
float ShoppingCart :: totPrice = 0.0;

int main() {

	int ch, i=0;
	const int size = 100;
	ShoppingCart cart[size];

	do {
		cout << "\nEnter 1 to add item. \nEnter 2 to remove item. \nEnter 3 to display all items. \nEnter 4 to get total price. \nEnter 0 to Exit. \nEnter your choice: ";
		cin >> ch;
		
		switch(ch) {
			case 1:
				cart[i].addItem();
				break;

			case 2:
				int index;
				cout << "\n";
				for(int j=0; j<ShoppingCart::counter; j++) {
					cout << j << ".  ";
					cart[j].displayItems();
				}
				cout << "\nEnter index to delete item: ";
				cin >> index;
				cart[index].removeItems();
				break;

			case 3:
				cout << "\nYou have the following items in your cart:-\n" << endl;
				for(int j=0; j<ShoppingCart::counter; j++) {
					cart[j].displayItems();
				}
				break;

			case 4:
				cart[i].totalPrice();
				break;

			case 0:
				cout << "Exited the program successfully!" << endl;
				break;

			default:
				cout << "Enter correct choice: " << endl;
				break;
		}
		i++;
	} while(ch != 0);

	return 0;
}
