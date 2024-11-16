// below 12 child
//  btm 12 and 18 teenager
//  above 18 adult
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age :\n";
    cin >> age;
    if (age < 12)
    {
        cout << "You are under child age \n";
    }
    else if (age > 18)
    {
        cout << "You are adult";
    }
    else
    {
        cout << "You are in teenage \n";
    }
}