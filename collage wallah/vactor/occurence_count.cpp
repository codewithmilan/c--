
//count the no. of occurence is repeated;
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
    int x, count = 0;
    cout << "Enter which element you want to count :";
    cin >> x;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            count++;
        }
    }
    cout << "selected element is " << count << " times";
}