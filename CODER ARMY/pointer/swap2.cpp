#include <iostream>
using namespace std;
// using call by pointer
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    cout << a << " " << b;
}