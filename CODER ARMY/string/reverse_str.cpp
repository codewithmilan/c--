#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // int start = 0, end = str.size() - 1;
    // while (start <= end)
    // {
    //     swap(str[start], str[end]);
    //     start++, end--;
    // }
    // cout << str;


    // **** other approch
    int start = str.size() - 1;
    while (start >= 0)
    {
        cout << str[start] << " ";
        start--;
    }
}