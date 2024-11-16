#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int twosum1(vector<int> v, int target)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
                return 1;
        }
    }
    return -1;
}
int twosum2(vector<int> v, int target)
{
    int n = v.size();
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        int key = target - v[i];
        int start = i + 1, end = n - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (v[mid] == key)
            {
                return 1;
            }
            else if (v[mid] < key)
                start++;
            else
                end--;
        }
    }
    return -1;
}
// int twosum3(vector<int> v, int target)
// {
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         int key = target - v[i];
//         int start = i + 1, end = n - 1;
//         if (v[start] == key)
//             return {i, start};
//         else if (v[start] < key)
//             start++;
//         else
//             end--;
//     }
//     return -1;
// }

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cin >> target;
    cout << twosum2(v, target);
}