#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout << "Enter  any number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    cout << sum;
}