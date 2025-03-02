#include <iostream>
using namespace std;
class Demo
{

    string name;
    int rollno;
    int sal;

public:
    void setname(string s)
    {
        if (s.size() < 0)
        {
            cout << "Invilid name ";
        }
        else
            name = s;
    }

    void setRollno(int r)
    {
        rollno = r;
    }
    void setSal(int sal)
    {
        if (sal < 0)
        {
            cout << "Invilid salary ";
        }
        else
            this->sal = sal;
    }
    void Display()
    {
        cout << name << " " << rollno << " " << sal << endl;
    }
};
int main()
{
    Demo a1, a2; // a1 ,a2 are object
    // Demo are the class
    a1.setname("milan");
    a1.setRollno(1);
    a1.setSal(1000);
    a1.Display();

    a2.setname("milanX");
    a2.setRollno(11);
    a2.setSal(1100);
    a2.Display();
}