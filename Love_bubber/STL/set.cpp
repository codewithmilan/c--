#include <iostream>
#include <set>
using namespace std;
int main()
{
    // set : it only store unique value .
    //  in set we can insert or delete the element but not modify.
    // it return in sorted order
    // tc  of insert function --> is o(log(n))

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(0);
    s.insert(0.1); // 0.1 consider 0
    int n = s.size();

    cout << s.size() << endl;
    cout << s.count(5) << endl; // it return boolean value 
    // cout << s.find(5) << endl;




    set<int>::iterator i=s.begin(); i++;
    s.erase(i);
    for (auto i : s)
        cout << i << " ";
}