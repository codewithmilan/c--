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
    int total_sum = 0, prefix = 0, ans;
    for (int i = 0; i < n; i++)
    {
        total_sum += v[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefix += v[i];
        ans = total_sum - prefix;
        if (ans == prefix)
            cout << "Got it" << endl;
        
    }
    cout << ans << endl;
    cout << prefix << endl;
    cout << total_sum << endl;
    return 0;
}