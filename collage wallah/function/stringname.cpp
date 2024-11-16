#include <iostream>
using namespace std;
void fun(string name);
int main()
{
    fun("Milan");
}
void fun(string name)
{
    // string name;
    cout << "Are you excited to meet your friend " << name << " ?";
}