#include <iostream>
using namespace std;
class eName
{
    string name;
    int id;
    double sal;

public:
    eName()
    {
    }
    eName(string name, int id, int sal)
    {
        this->name = name;
        this->id = id;
        this->sal = sal;
    }

    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    double getSalary()
    {
        return sal;
    }

    void setName(string ename)
    {
        name = ename;
    }
    void setId(int eId)
    {
        id = eId;
    }
    void setSal(double eSal)
    {
        sal = eSal;
    }
    void display()
    {
        cout << name << " " << id << " " << sal << endl;
    }
};
int main()
{
    eName e1("Milan", 1, 100.0);
    e1.display();
    eName e2, e3;
    e2.setName("MilanX");
    e2.setId(2);
    e2.setSal(150.0);
    e2.display();
    e3.setName("Basant ");
    e3.display();
}