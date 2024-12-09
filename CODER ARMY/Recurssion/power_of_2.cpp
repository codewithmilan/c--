#include <iostream>
using namespace std;
int pow(int num, int n)
{
    if (n == 0)
        return 1;
    return num * pow(num, n - 1);
}
int main()
{
    cout << "enter base : ";
    int num;
    cin >> num;
    cout << "enter power : ";
    int n;
    cin >> n;
    cout << pow(num, n);
}