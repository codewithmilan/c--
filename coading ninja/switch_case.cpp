#include <iostream>
using namespace std;
int main()
{
    int ch;
    cin >> ch;
    int r, l, b;

    switch (ch)
    {
    case 1:
    {
        cin >> r;
        cout << 3.14159265359 * r * r;
        break;
    }
    case 2:
    {
        cin >> l >> b;
        cout << l * b;
        break;
    }

    default:
        break;
    }
}