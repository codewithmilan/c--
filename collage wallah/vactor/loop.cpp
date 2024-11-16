#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.begin() + 2, 66);
    // for each;
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    v.erase(v.end() - 3);
    // while loop
    int i = 0;
    while (i < v.size())
    {
        cout << v[i++] << " ";
    }
}