#include <iostream>
using namespace std;

class demo
{
    int a, b;

public:
    void sum(int a, int b)
    {
        cout << a + b;
    }
    void sum(int a, double b)
    {
        cout << a + b;
    }
};

int main()
{
    demo s;
    s.sum(2, 3);
}