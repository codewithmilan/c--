#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 5, 4};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 3)
        {
            cout << i << arr[i];
        }
    }
}