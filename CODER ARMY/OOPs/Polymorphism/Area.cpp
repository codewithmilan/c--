#include <iostream>
using namespace std;
// function overloading

// Multiple function name with different parameter in same class 
class area
{
public:
    double CircleArea(int r)
    {
        return 3.14 * r * r;
    }
    double rectangleArea(int l, int b)
    {
        return l * b;
    }
};
int main()
{
    area A1, A2;
    cout << A1.CircleArea(5) << endl;
    cout << A2.rectangleArea(5, 6) << endl;
}