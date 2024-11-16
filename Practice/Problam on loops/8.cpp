#include <iostream>
using namespace std;
int main()
{
    int a = 1, n;
    int b = 1;
    int sum = 1;
    printf(" Enter the term of fibnacci series");
    scanf("%d", &n);
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << n;
}
