#include <iostream>
using namespace std;
void sum(int , int );
int main()
{
    int a,b;
  sum(a,b);
}
void sum(int a, int b)
{
    int add;
    cout << "Enter two number :";
    cin >> a >> b;
    add = a + b;
    cout << " Sum of two number is : " << add;
    return ;
}