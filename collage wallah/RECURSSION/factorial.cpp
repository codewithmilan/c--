#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 1 || n == 0)
        return 1;
    int ans = n * f(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    int result = f(n);
    cout << result;
}