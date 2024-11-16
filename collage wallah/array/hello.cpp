#include <iostream>
using namespace std;
int main()
{
    char arr[66];
    cout << "ENTER STRING :";
    for (int i = 0; i < arr[].size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[j];
        }
        cout << "\n";
    }
}