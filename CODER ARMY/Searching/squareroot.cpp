#include <iostream>
using namespace std;
void findSqrt(int n)
{
    double ans = 0, start = 1, end = n;
    long long mid;

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
            end = mid - 1;
        }
    }
    cout << ans;
}
int main()
{

    int n;
    cout << "Enter a number :";
    cin >> n;
    findSqrt(n);
}