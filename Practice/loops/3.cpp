// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the vlaue of n :";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << i * n << endl;
    }
}