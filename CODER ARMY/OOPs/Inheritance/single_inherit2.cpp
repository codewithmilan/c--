#include <iostream>
using namespace std;
class human
{
    string name;
    int age;

public:
    human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << age << endl;
    }

    // setter
    void setNmae(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    // getter
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

class student : public human
{
    int rollno, fee;

public:
    student(string name, int age, int rollno, int fee) : human(name, age)
    {
        // this->name = name;
        // this->age = age;
        this->rollno = rollno;
        this->fee = fee;
    }
    void display()
    {
        cout << getName() << " " << getAge() << " " << rollno << " " << fee << " " << endl;
    }
};
int main()
{
    student s1("Milan", 18, 1, 1000);
    s1.display();
    human h1("Basant ", 17);
    h1.setNmae("Laxmi ");
    h1.display();
}