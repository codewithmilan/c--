#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // it follow the FIFO technique 
    queue<string> q;
    q.push("milan");
    q.push("kumar");
    q.push("verma");
    q.push("damgi");
    cout << q.front() << endl;
    q.pop();                        // delete milan
    cout << q.front() << endl;
    cout << q.empty() << endl;
    cout << q.size() << endl;
}