#include <iostream>
#include <map>
using namespace std;
int main()
{
    // map is use to store data in key value pair

    // it return kay and value in assending order.

    map<int, string> m;
    m[1] = "Milan";
    m[2] = "basant";
    m.insert({5, "divyansh"});
    m[3] = "sadanad";
    m[4] = "rahul";
    m.erase(5);
    for (auto i : m)
        cout << i.first << " --> " << i.second << endl;
}