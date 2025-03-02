#include <iostream>
using namespace std;
class customer
{
public:
    string name;
    int *bal;
    // constructor
    customer(string name, int balance)
    {
        this->name = name;
        bal = new int;
        *bal = balance;
    }
    // destructor 
    ~customer()
    {
        cout<<"destructor is called ";
        delete bal;
    }
};
int main()
{
    customer A1("milan", 200);
}