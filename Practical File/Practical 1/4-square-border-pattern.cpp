// Program in C++ to print a square border pattern

#include <iostream>
using namespace std;

int main() 
{
    int n= 4;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || i==n)
                cout << "* ";
            else 
            {
                if(j==0 || j==n)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}
