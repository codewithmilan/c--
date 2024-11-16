#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << x << " " << y << " \n";
}
int main()
{
    int a = 5, b = 6;
    swap(a, b);
    cout << "mk";
    cout << (a) << " " << (b) << " ";
}