// 121212
// 212121

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {

            if ((i + j) % 2 == 0)
            {
                cout << "2";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
}