#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {3, 3, 5, 4, 6}, count = 0;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i];
        }
    }
}