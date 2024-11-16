#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v(5);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    int arr[5] = {1, 2, 3, 4, 5};
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            flag = false;
        }
    }

    cout << flag;
}