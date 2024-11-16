
// wap to print the repeated number
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {3, 3, 4, 4, 6}, count = 0;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
            }
        }
    }
}