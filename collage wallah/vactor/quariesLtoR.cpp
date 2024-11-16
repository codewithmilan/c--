#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int l, r, sum = 0;
    cin >> l >> r;
    for (int i = l - 1; i < r; i++)
    {
        sum += arr[i];
    }

    cout << sum;
}