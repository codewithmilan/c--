#include <iostream>
using namespace std;
void print(int num, int n)
{
    if (num > n)
    {
        return;
    }
    cout << num << endl;
    print(num + 2, n);
}
int main()
{
    int n;
    cin >> n;
    print(2, n);
}