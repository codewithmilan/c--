// Print all the odd numbers from 1 to 100
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the vlaue of n :";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}