#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int max = 0;
    int second_max = 0;
    int arr[5] = {2, 6, 3, 8, 1};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }
    cout << second_max;
}