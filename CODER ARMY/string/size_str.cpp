#include <iostream>
using namespace std;
int main()
{
    // string str="milan kumar verma"; // 17 size
    string str;
    cin >> str;
    int size = 1;

    while (str[size] != '\0')
    {
        size++;
    }
    cout << size;
}