#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter  any number :";
    cin >> n;
    while (n != 0) //n>0
    {
        n = n / 10;
        count++;
    }
    cout << "Total digit =" << count;
}