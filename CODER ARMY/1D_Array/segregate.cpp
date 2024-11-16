
// wap to arrange 0 and 1 in asc

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            count0++;
        else
            count1++;
    }
    for (int i = 0; i < count0; i++)
    {
        cout << v[count0];  
    }

    for (int i = count0; i < n; i++)
    {
        cout << v[count1];
    }
}
