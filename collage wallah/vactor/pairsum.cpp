#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {3, 2, 3, 4, 6}, count = 0;
    int x = 6;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                count++;
            }
        }
    }
    cout << count;
}