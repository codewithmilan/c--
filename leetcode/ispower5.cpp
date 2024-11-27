#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int start = 0, end = n, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (pow(4, mid) == n)
        {
            cout << "true";
            break;
        }
        else if (pow(4, mid) < n)
            start = mid + 1;
        else
            end = mid - 1;
    }
    // cout << "false";
}