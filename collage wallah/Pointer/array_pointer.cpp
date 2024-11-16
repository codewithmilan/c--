#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {2, 5, 8};
    int n = 3;
    int *ptr = &arr[0];
    cout << *ptr << " " << arr << "\n";
    cout << *(arr + 0) << " " << *(arr + 1) << "\n";

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}