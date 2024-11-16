// wap to short anarray in even and odd in the  form int which even number comes into first  and odd in the laast .
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 7, 5, 4, 9, 6, 8};
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] % 2 != 0)
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