// Write a program to print all the ASCII values and their
//  equivalent characters of 26 alphabets using a while loop
#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the vlaue of n :";
    // cin >> n;

    for (int i = 1; i <= 90; i++)
    {
        cout << i << " " << (char)i << endl;
    }
}