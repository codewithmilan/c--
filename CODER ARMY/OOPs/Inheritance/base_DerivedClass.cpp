#include <iostream>
using namespace std;
class human
{
    string religion, color;

public:
    string name;
    int age;
};

class student : public human
{
protected:
    int rollno, id;

public:
    student(string name, int age, int rollno, int id)
    {
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->id = id;
    }
    void display()
    {
        cout << name << " " << age << " " << rollno << " " << id << endl;
    }
};

int main()
{
    student s1("Milan", 18, 1, 01);
    s1.display();
    // s1.color(); // private hai isliye access nhi kr skte hai
    // student *s2 = new student();.//  ye nhi hoga kyu ki default constructor nhi hai
    cout << s1.name << endl;
    cout << s1.age << endl;
    // cout << s1.rollno << endl;// error because it is in protected 
}