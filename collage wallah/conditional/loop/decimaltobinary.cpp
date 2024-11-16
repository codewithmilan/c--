#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, arr[50];
    cin >> n;
    while (n != 0)
    {
        arr[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}