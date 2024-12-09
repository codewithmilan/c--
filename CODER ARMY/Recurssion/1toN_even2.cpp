#include <iostream>
using namespace std;

// only one argument pass
//  time complexity of recurssion is o(2^n);
void printeven(int n)
{
    if (n == 0)
        return;
    printeven(n - 2);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
        n--;
    printeven(n);
}