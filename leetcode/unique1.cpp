#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int start = 1, end = n ;
    for (int i = 0; i < end; i++)
    {
       int j;
        if (v[i] == v[j])
        {
            cout << v[i];
        }
        else
            j++;
     }
    //   not completed
}