#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number :\n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "the sum of " <<n<<" natural number is :" <<  sum;
}