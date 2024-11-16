#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{

    int n;
    cout << "Enter the term of finacii :";
    cin >> n;
    int ans = fib(n);
    cout << " The " << n << "th" << " term of fibnacii term is:" << ans;
}