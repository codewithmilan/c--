#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    // cout << a << " " << b << " ";
    int c;
    for (int i = 3; i <= 6; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << " ";
}