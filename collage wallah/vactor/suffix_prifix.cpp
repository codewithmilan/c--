#include <iostream>
#include <vector>
using namespace std;
bool prisuf(vector<int> &v)
{
    int total = 0;
    for (int i = 0; i < v.size(); i++)
    {
        total += v[i];
    }
    int prifix = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prifix += v[i];
        int suffix = total - prifix;
        if (prifix == suffix)
        {
            return true;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int>(v);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    prisuf(v);
}