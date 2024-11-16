#include <iostream>
using namespace std;
int main()
{
    // int x = 10;
    // int *ptr = &x;
    // cout << ptr << endl;
    // ptr += 1;
    // cout << ptr << endl;

    int arr[] = {5, 6};
    int *ptr = &arr[0];
    cout << *++ptr << endl;
    cout << ++*ptr << endl;
    cout << arr[0] << " " << arr[1];
}