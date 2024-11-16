
// wap to print the no. zero into in the last array;  [1,0,5,0,6,0,0]==[1,5,6,0,0,0,0];
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {5, 0, 8, 0, 0, 0, 6};
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}