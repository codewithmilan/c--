#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    vector<int> brr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int missing, repeat;
    for (int i = 0; i < n; i++)
    {
        brr[arr[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " - " << brr[i] << endl;
    }
}