#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // priority for maximum element : the element of highest piority which come first

    priority_queue<int> maxi;
    maxi.push(5);
    maxi.push(55);
    maxi.push(2);
    maxi.push(3);
    maxi.push(7);
    maxi.push(0);
    maxi.push(0.1); // 0.1 consider 0
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " "; // print top element 
        maxi.pop(); // pop top element 
    }
}