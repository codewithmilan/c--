#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    for (int i : a)
        cout << i << " ";

    cout << a.at(3) << endl;
    cout << a.begin() << endl;
    cout << a.end() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.empty() << endl;
    // cout<<a.()<<endl;
}