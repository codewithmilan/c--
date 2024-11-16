#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    for (int i = 0; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
}