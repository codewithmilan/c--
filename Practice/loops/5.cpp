// Display this GP - 3,12,48,.. upto ‘n’ terms.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the vlaue of n :";
    cin >> n;
    int term = 3;
    for (int i = 0; i < n; i++)
    {
        cout << term << " ";
        term *= 4;
    }
}