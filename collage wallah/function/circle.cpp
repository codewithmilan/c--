#include <iostream>
using namespace std;
int areaCircumference(int)
{
    int r;
    cout << "Enter the radius of circle :";
    cin >> r;
    cout << "Area = " << 3.14 * r * r << "\n";
    cout << "circumference = " << 2 * 3.14 * r;
}

int main()
{
    int r;
    areaCircumference(r);
}