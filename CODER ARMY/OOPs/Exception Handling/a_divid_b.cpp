#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw "Undefine ";
        }
        cout << a / b;
    }
    catch (const char *e)
    {
        cout << "Exception Occured :" << e;
    }
}