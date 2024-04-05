// Program in C++ to demonstrate the working of function overloading.
// Find the length of enrollment no and the length of student's name by using different overloaded functions name 'student.'

// This program implements function overloading between int (long long) to string

#include <iostream>
using namespace std;

void student(long long eNo) 
{
    cout << "\nEnrollment No : " << eNo << endl;
    int c = 0;
    while(eNo > 0)
    {
        eNo /= 10;
        c++;
    }
    cout << "Length of Enrollment No = " << c << " characters." << endl;
}

void student(string sName) 
{
    cout << "\nStudent Name : " << sName << endl;
    int sLen = 0, i = 0;
    while(sName[i] != '\0')
    {   
        i++;
        if(sName[i] == (char)32)
            continue;
        sLen++;
    }
    cout << "Length of Student's Name = " << sLen << " characters." << endl;
}

int main() 
{
    long long eNo;
    string sName;
    cout << "Enter Enrollment no. of Student : ";
    cin >> eNo;
    cout << "Enter name of Student : ";
    cin.ignore(); // to remove the buffer
    getline(cin, sName); // to take full name as input
    // Calling overloaded functions
    student(eNo);
    student(sName);
    return 0;
}
