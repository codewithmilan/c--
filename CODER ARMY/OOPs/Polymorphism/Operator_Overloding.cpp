#include <iostream>
using namespace std;
class operator1
{

public:
    void sum(int a, int b)
    {
        // this->a = a;
        // this->b = b;
        cout << a + b << endl;
    }

public:
    // string a, b;
    void sum(string a, string b)
    {
        cout << a + b;
    }
};
int main()
{
    operator1 a1;
    a1.sum(4, 5);
    a1.sum("Milan", "X");
}