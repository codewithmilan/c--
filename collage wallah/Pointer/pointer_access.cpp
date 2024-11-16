#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    cout << "Address of x :" << *ptr << endl;
    cout << "value of x :" << x << endl;
    *ptr = 23;
    cout << "update x =" << x << endl;
    int valueatx = *ptr;
    cout << valueatx;
}