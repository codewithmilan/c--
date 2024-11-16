#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {0, 5, 1, 0, 6}, count = 0;
    int x = 6;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}