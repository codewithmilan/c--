#include <iostream>
#include <exception>
using namespace std;
class customer
{
    string name;
    int bal;
    int acc;

public:
    customer(string name, int bal, int acc)
    {
        this->name = name;
        this->bal = bal;
        this->acc = acc;
    }
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "Amount is too small ,please deposite greater amount ";
            return;
        }
        bal += amount;
        // cout << bal << endl;
        cout << amount << " Amount Created successfully " << endl;
    }
    void withdraw(int amount)
    {
        if (bal < amount)
        {
            cout << "Withdraw is not possible,because your balance is to low " << endl;
            return;
        }
        bal -= amount;
        cout << amount << " Amount debit successfully " << endl;
    }
    void display()
    {
        cout << "Name : " << name << ", Balance : " << bal << ", Account No. : " << acc << endl;
    }
};
int main()
{
    customer c1("Milan", 100, 1);
    // c1.deposit(100);
    // c1.display();
    // c1.withdraw(300);
    // c1.display();
    customer c2("Basant", 1000, 2);
    c2.display();
    c2.withdraw(5000);
    c2.display();
}