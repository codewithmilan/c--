// wap to print the squareroot of nearest number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<0)return n;
    int start = 0, end = n - 1, mid, ans = 0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    cout << ans;
}