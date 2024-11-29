#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
    v.push_back(55);
    v.emplace_back(56);
    v.emplace_front(56);
    v.push_front(55);
    v.push_front(57);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v.empty() << endl;

    //  time complexity of eraqse function is o(n);
    v.erase(v.begin(), v.begin() + 2);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    v.clear();

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}