// wap to print  the sum of occurence

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int x;
    cout << " Enter the value of x:";
    cin >> x;
    int occure = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occure = i;
        }
    }

    cout << occure;
}