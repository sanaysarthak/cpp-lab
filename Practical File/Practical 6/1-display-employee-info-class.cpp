#include <iostream>
using namespace std;

class Employee
{
private:
    string empName;
    int salary;
    int age;

public:
    void setData()
    {
        cout << "Enter Employee name: ";
        getline(cin, empName);
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
    void displayData()
    {
        cout << "\nEmployee Name: " << empName;
        cout << "\nSalary: " << salary;
        cout << "\nAge: " << age << "\n" << endl;
    }
};

int main()
{
    Employee e1, e2;
    e1.setData();
    e1.displayData();
    e2.setData();
    e2.displayData();
    return 0;
}
