#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int a, b, result=1;
    cout << "Enter two number :";
    cin >> a >> b;
    // result = pow(a, b);

    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }

    cout << "The power of this number is :" << result;
}