#include <iostream>
using namespace std;
void doubleptr(int &x)
{
    x = 2 * x;
}
int main()
{
    int x;
    cin >> x;
    int *ptr = &x;
    doubleptr(*ptr);
    cout << x;
}