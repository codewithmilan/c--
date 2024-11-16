#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << sizeof(a) << endl;
    int b = 8;
    bool flag = true;
    a > b ? flag = true : flag = false;
    cout << flag << endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a >> b) << endl;
    cout << (a << b);
}