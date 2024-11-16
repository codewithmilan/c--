#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three number :";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Greatest number is :" << a;
    }
    else if (b > a && b > c)
    {
        cout << "greatest number is :" << b;
    }
    else
    {

        cout << "greatest number is :" << c;
    }
}