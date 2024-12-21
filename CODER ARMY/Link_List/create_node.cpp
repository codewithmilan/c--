#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    node a1;
    a1.data = 4;
    a1.next = NULL;
    cout << a1.data;
    cout << a1.next;
    return 0;
}