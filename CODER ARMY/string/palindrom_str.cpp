#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int start = 0, end = str.size() - 1;
   

    // while (start <= end)
    // {
    //     if (str[start] != str[end])
    //     {
    //         cout << "This is not palindrom ";
    //         return 0;
    //     }
    //     start++, end--;
    // }
    // cout << "This is palindrom ";

    
    while (start <= end)
    {
        if (islower(str[start]) != islower(str[end]))
        {
            cout << "This is not palindrom ";
            return 0;
        }
        start++, end--;
    }
    cout << "This is palindrom ";
}