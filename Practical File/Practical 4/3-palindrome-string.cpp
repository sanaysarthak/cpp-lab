// Program in C++ to check whether a given string is Palindrome or not

#include <iostream>
#include <string>
using namespace std;

int checkPalindrome(string str) {
	string rev = str;
	int len = str.length();

	for(int i=0, j=len-1; i<len; i++, j--) {
		str[j] = tolower(str[j]); // converting the actual string to lowercase, before copying its reverse to the string rev
		rev[i] = str[j];
	}

	if(str == rev)
		return 1;
	else
		return 0;
}

int main() {
	string str;
	cout << "Enter string: ";
	cin >> str;
	if(checkPalindrome(str) == 1)
		cout << str << " is a Palindrome string.";
	else 
		cout << str << " is not a Palindrome string.";
	return 0;
}
