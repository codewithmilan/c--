#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "* ";
    }
    cout << "\n";
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}