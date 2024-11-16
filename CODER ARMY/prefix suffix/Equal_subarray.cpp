// wap to print the two equal subarray
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element of array :";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++)
        {
            sum1 += v[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            sum2 += v[j];
        }
        if (sum1 == sum2)
        {
            cout << " got it";
            break;
        }
    }
    return 0;
}