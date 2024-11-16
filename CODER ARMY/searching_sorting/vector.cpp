#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(35);
    v.push_back(45);
    v.pop_back();
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(1) << endl;
    
    // int count= count(v.begin(), v.end(),5);
    // int max= max_element(v.begin(), v.end() ) << endl;

    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // cout << v.size();
    // cout << v.capacity();

    
}