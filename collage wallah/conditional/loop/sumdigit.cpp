#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout << "Enter  any number :";
    cin >> n;
    while (n != 0) // n>0
    {
        r = n % 10;

        sum += r;
        n = n / 10;
    }
    cout << " Sum of total digit =" << sum;
}