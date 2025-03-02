#include <iostream>
using namespace std;
class demo
{
public:
    string name;
    int id, sal;
    demo(){

    }
    demo(string name, int id, int sal)
    {
        this->name = name;
        this->id = id;
        this->sal = sal;
    }
    void display()
    {
        cout << name << " " << id << " " << sal << endl;
    }
};
int main()
{
    demo a1("Rjaii", 1, 1000);
    a1.display();
    demo a2;
    a2=a1;
    a2.display();

}