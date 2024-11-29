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
    for (int i = 0; i < n; i++)
        cout << v[i];
    cout << endl;

    cout << v.at(2) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.empty() << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(1000);
    v.push_back(1080);
    v.push_back(1050);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    v.pop_back();
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    // copy the element of vector in to another vector
    cout << "\n";
    vector<int> v1(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        v1[i] = v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v1[i] << " ";
    }
}