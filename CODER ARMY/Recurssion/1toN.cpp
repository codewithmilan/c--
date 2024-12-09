#include <iostream>
#include <vector>
using namespace std;
void print(int num, int n)
{
    if (num == n)
    {
        cout << n;
        return;
    }
    cout << num << " ";
    print(num + 1, n);
}
int main()
{
    int n;
    cin >> n;
    print(1, n);
}