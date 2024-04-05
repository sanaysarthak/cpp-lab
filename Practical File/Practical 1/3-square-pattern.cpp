// Program in C++ to print a simple square pattern

#include <iostream>
using namespace std;

int main() 
{
    int n= 3;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
