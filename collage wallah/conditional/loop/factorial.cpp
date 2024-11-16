#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter  any number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            fact *= i;
        }
        cout << "The factorial of " << i << " is: " << fact << endl;
    }
}