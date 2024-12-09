
#include <iostream>
using namespace std;
int nstep(int n)
{
    if (n <=1)
        return n;
    return nstep(n - 1) + nstep(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << nstep(n);
}