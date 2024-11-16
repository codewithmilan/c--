#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {3, 3, 9, 4, 6}, max = 0;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
}