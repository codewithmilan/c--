#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // printing the address of 0 index

    // cout << arr << endl;
    // cout << (arr + 0) << endl;
    // cout << arr[0] << endl;
    // cout << ptr << endl;
    // // printing the vaue of 0 index
    // cout << *arr << endl;
    // cout << *(arr + 0) << endl;
    // // cout << *(arr[0]) << endl;
    // cout << *ptr << endl;

    // ****************** for all address
    for (int i = 0; i < 5; i++)
    {
        cout << (arr + i) << " ";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
}