#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int  &ele : arr)
    {
        cin >> ele;
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}