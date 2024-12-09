#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 5};
    int sum = 0,total=0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    total = 5 * (5 + 1) / 2;
    cout << total - sum;
}