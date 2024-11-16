#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;

    cout << "Enter two number:";
    cin >> num1 >> num2;
    cout << "Before swaping a = " << num1 << ",b = " << num2 << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swaping a = " << num1 << ",b = " << num2;

 
    return 0;
}