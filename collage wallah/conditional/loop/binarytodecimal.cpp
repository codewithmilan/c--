#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, b = 0, a = 0, r;
    cout << "Enter binary number :";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        b += r * pow(2, a);
        a++;
        n /= 10;
    }
    cout << "binary to decinal is => " << b;
}