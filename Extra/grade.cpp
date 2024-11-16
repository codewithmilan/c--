#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 5 == 0 && n > 38)
        cout << n;
    else if (n % 5 < 3)
        cout << n;
    else if ((n % 5) == 3)
        cout << n + 2;
    else if ((n % 5) == 4)
        cout << n + 1;
    else if (n < 38)
        cout << n;
}