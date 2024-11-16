#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     if (pow(2, i) == n)
    //     {
    //         cout << "true";
    //         break;
    //     }
    // }/

    int start = 0, end = n, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (pow(2, mid) == n)
        {
            cout << "true";
            break;
        }
        else if (pow(2, mid) < n)
            start = mid + 1;
        else
            end = mid - 1;
    }
}