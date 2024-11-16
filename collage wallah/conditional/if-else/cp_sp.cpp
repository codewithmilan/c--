#include <iostream>
using namespace std;
int main()
{
    float sp, cp, profit, loss;
    cout << "Enter  coast price :" << endl;
    cin >> cp;
    cout << "Enter  selling price :" << endl;
    cin >> sp;
    if (sp > cp)
    {
        profit = sp - cp;
        cout << "Profit = " << profit;
    }
    else
    {
        loss = cp - sp;
        cout << "loss = " << loss;
    }
}