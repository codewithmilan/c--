#include <iostream>
#include <exception>
using namespace std;
int main()
{
    try
    {
        int *p = new int[1000000000];
        cout << "Memory allocation successfully :";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exceptation occured :" << e.what();
    }
}