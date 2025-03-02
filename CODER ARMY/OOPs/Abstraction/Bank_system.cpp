#include <iostream>
#include <vector>
#include <fstream>
#include <chrono>
#include <ctime>
using namespace std;

class Customer
{
    string name;
    int bal;
    int acc;

public:
    Customer(string name, int bal, int acc) : name(name), bal(bal), acc(acc) {}

    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "Amount is too small, please deposit a greater amount.\n";
            return;
        }
        bal += amount;
        cout << amount << " deposited successfully!\n";
    }

    void withdraw(int amount)
    {
        if (amount > bal)
        {
            cout << "Withdraw is not possible, insufficient balance!\n";
            return;
        }
        bal -= amount;
        cout << amount << " withdrawn successfully!\n";
    }

    void display() const
    {
        cout << "Name: " << name << ", Balance: " << bal << ", Account No.: " << acc << endl;
    }

    int getAccountNo() const { return acc; }

    string getCurrentTime()
    {
        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);
        return ctime(&currentTime);
    }
    void saveToFile()
    {
        ofstream file("customers.txt", ios::app);

        file << acc << " " << name << " " << bal << " Time :" << getCurrentTime() << endl;
        file.close();
    }
};

class Bank
{
    vector<Customer> customers;

public:
    void addCustomer(string name, int bal, int acc)
    {
        customers.push_back(Customer(name, bal, acc));
    }

    void processTransaction()
    {
        int accNo, choice, amount;
        cout << "Enter Account Number: ";
        cin >> accNo;

        for (auto &c : customers)
        {
            if (c.getAccountNo() == accNo)
            {
                cout << "1. Deposit\n2. Withdraw\nEnter choice: ";
                cin >> choice;
                if (choice == 1)
                {
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    c.deposit(amount);
                }
                else if (choice == 2)
                {
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    c.withdraw(amount);
                }
                c.display();
                return;
            }
        }
        cout << "Account not found!\n";
    }

    void saveAllCustomers()
    {
        for (auto &c : customers)
        {
            c.saveToFile();
        }
        cout << "Data saved to file!\n";
    }
};

int main()
{
    Bank bank;
    bank.addCustomer("Milan", 100, 1);
    bank.addCustomer("Basant", 1000, 2);
    bank.addCustomer("Sadanand", 10000, 123);

    bank.processTransaction();
    bank.saveAllCustomers();
}
