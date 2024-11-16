// wap to short anarray in 0s and 1s form
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 1, 1, 0, 0, 1};
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}