#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 2 || n == 1)
        cout << "yes";
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "not";
            break;
        }
        cout << "yes";
    }
}