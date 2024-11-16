
// wap to print the index of array twosum
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter the size of array :" << endl;
    int n;
    cin >> n;
    // 3 5 6 7 8 9 in sorted array
    vector<int> v(n);
    cout << "Enter the element of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cout << "enter target : ";
    cin >> target;
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (v[start] + v[end] == target)
        {
            cout << "Pair " << start << " " << end;
            break;
        }
        else if (v[start] + v[end] < target)
            start++;
        else
            end--;
    }
    return 0;
}