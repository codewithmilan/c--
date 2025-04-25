#include <iostream>
using namespace std;
class parent
{
public:
    void display()
    {
        cout << "Parent class is called" << endl;
    }
};
class child : public parent
{
public:
    void show()
    {
        cout << "child class is called" << endl;
    }
};

int main()
{
    child obj;
    obj.show();
    obj.display();
}