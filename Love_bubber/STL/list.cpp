#include <iostream>
#include <list>
using namespace std;
int main()
{

    list<int> v = {1, 2, 3, 4, 5};

    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_front(11);
    v.push_front(13);
    cout << endl;

    for (int i : v)
        cout << i << " ";
    v.pop_back();
    v.pop_front();
    cout << endl;

    for (int i : v)
        cout << i << " ";
    cout << v.front() << endl;
    cout << v.back() << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // list can also be declare this type

    list<int> l(5, 100);
    for (int i : l)
        cout << i << " ";
}