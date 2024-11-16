// wap to print the largest subarray's sum in array
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
    int prefix = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += v[i];
        maxi = max(prefix, maxi);
        if (prefix < 0)
            prefix = 0;
    }
    cout << "Maximun subarray's Sum = :" << maxi;
}