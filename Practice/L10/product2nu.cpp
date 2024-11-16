#include <iostream>
using namespace std;
int productnumber(int &a, int &b)
{
    int result = a * b;
    cout << result << " ";
    return result;
}
int main()
{
    int a = 5, b = 6;
    productnumber(a, b);
}