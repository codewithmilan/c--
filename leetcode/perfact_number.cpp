#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <n/2+1; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (n == sum)
        cout << "Perfact";
    else
        cout << "not";
}