#include <iostream>
using namespace std;
int printN(int n)
{
    if (n > 0)
    {
        printN(n - 1);
        cout << n << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    printN(n);
}