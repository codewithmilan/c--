#include <iostream>
#include <vector>
using namespace std;
int threesum1(vector<int> v, int target)
{
    int n = v.size();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == target)
                    return 1;
            }
        }
    }
    return -1;
}
int threesum2(vector<int> v, int target)
{
 
}
int threesum3(vector<int> v, int target)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int key = target - v[i] - v[j];
            int start = j + 1, end = n - 1, mid;
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
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cin >> target;

    // cout << threesum1(v, target);
    // cout << threesum2(v, target);
    cout << threesum3(v, target);
}