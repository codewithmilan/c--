// wap to print first five natural number of square
#include <iostream>
#include <math.h>
using namespace std;
int square(int x)
{
    return x * x;
}

// int main()
// {
//     int n;
//     square(n);
// }
// void square(int)
// {
//     int n, srt;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         srt = i * i;
//         cout << "The square of natural number is :" << srt << endl;
//     }
// }

int main()
{
    int n;
    cout << "Enter the value of n :";

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "The square of natural number is " << square(i) << endl;
    }
}