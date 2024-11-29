#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // priority for minimun element : the element of lowest piority which come first

    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(5);
    mini.push(55);
    mini.push(2);
    mini.push(3);
    mini.push(7);
    mini.push(0);
    mini.push(0.1); // 0.1 consider 0
    int n = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " "; // print top element
        mini.pop();                // pop top element
    }
}