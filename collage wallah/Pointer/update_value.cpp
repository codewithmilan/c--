#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    cout << ptr << endl;
    int marks = 90;

    ptr = &marks;
    cout << ptr << endl;
}