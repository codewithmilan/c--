// wap of function to find who ca vote
#include <iostream>
using namespace std;
void getvote()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    if (age >= 18)
    {
        cout << "You can vote : yes";
    }
    else
    {

        cout << "You can vote : No ";
    }
}
int main()
{
    getvote();
}