// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rev(int x)
{
    int rev = 0, rem;
    while (x != 0)
    {
        rem = x % 10;
        x /= 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8))
            return 0;
        rev = rev * 10 + rem;
    }
    return rev;
}
int main()
{
    int x;
    cin >> x;
    cout << rev(x);
}