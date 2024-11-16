#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    float y = 20;
    int *ptr = &x;
    float *ptr1 = &y;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<y<<endl;
    cout<<&y<<endl;
}