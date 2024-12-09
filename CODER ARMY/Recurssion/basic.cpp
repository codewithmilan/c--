#include <iostream>
using namespace std;
void fun(int n)
{
    if (n == 0)
    {
        cout << "happy birthday";
        return;
    }
    cout << n << "Days left to your Birthday \n";
    fun(n - 1);
}
int main()
{

    // **************** using for loop *****************
    // for (int i = 5; i > 0; i--)
    // {
    //     cout << i << " Days left to your Birthday \n";
    // }
    // cout << "Happy birthday !";

    // **************** using function *****************

    int n = 5;
    fun(n);
    // cout << " happy birthday";
}