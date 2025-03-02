#include <iostream>
using namespace std;
class customer
{
public:
    string name;
    int bal, acc;

    //  Parameterized construction
    customer(string s, int b, int c)
    {
        name = s;
        bal = b;
        acc = c;
    }
    //  We can define multiple construction with same name but different parameter
    // name of contruction are same as class name
    // counstruction are use as value initilization
    // Construction have not return type

    customer(string name)
    {
        this->name = name;
    }
    customer(int bal, int acc)
    {
        this->bal = bal;
        this->acc = acc;
    }
    void display()
    {
        cout << name << " " << bal << " " << acc << " " << endl;
    }
};
int main()
{

    customer A1("Milan", 1000, 123);
    A1.display();
    customer A2("MilnX"); // other  two parameter no shared so, it will show garbage value
    A2.display();
    customer A3(123, 1000);
    A3.display();
}