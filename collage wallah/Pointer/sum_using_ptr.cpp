#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int *ptrx = &x;
    int *ptry = &y;
    int result;

    result = *ptrx + *ptry;
    int *ptr_result = &result;
    cout << "result :" << result << endl;
    cout << "address :" << &result << endl;
    cout << "value :" << *ptr_result << endl;
}