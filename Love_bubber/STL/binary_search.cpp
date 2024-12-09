#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<string> v(5);
    v.push_back("milan");
    v.push_back("basant");
    v.push_back("sadanand");
    v.push_back("laxmi");
    v.push_back("rahul");
    v.push_back("vikram");

    for (auto i : v)
        cout << i << " ";
    cout << binary_search(v.begin(), v.end(), "milan");
    // cout << upper_bound((v.begin(), v.end()) - v.begin());
    // cout << lower_bound((v.begin(), v.end()) - v.begin());
    int a = 2, b = 3;
    swap(a, b);
    cout << a << " " << b;
    cout << max(a, b);
    cout << min(a, b);
    vector<int> v1 = {2, 54, 7, 6, 3, 9, 3};
    sort(v1.begin(), v1.end());
    for (auto i : v1)
        cout << i << " ";
    cout << endl;

    reverse(v1.begin(), v1.end());
    for (auto i : v1)
        cout << i << " ";
    cout << endl;

    rotate(v1.begin(), v1.begin() + 2, v1.end());
    for (auto i : v1)
        cout << i << " ";
}