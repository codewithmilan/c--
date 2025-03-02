#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "Base class Show() called ";
    }
};

class derived : public base
{
public:
    void show() override
    {
        cout << "Derived class Show() called ";
    }
};
int main()
{
    base *obj = new base();
    obj->show();
    // derived obj1; // ye v shi hai 
    // obj1.show();
    derived *obj1 = new derived();
    obj1->show();
}