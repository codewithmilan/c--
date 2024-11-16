#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, evensum = 0, oddsum = 0, diff;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evensum += arr[i];
        }
        else
        {
            oddsum += arr[i];
        }
    }
    diff = evensum - oddsum;
    cout << "Difference of even index and odd index is  " << diff;
}