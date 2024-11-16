#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :\n";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "This is even number :" << n;
    }
    else
    {
        cout << "This is odd number :" << n;
    }
}