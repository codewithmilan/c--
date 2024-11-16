#include <iostream>
#include <vector>
using namespace std;
int foursum1(vector<int> v, int target)
{
    int n = v.size();
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (v[i] + v[j] + v[k] + v[l] == target)
                        return 1;
                }
            }
        }
    }
    return -1;
}
// similar as three sum

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cin >> target;

    cout << foursum1(v, target);
    // cout << threesum2(v, target);
    // cout << threesum3(v, target);
    
}