#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno, age;
    student(string name, int rollno, int age)
    {
        (*this).name = name;
        this->rollno = rollno;
        this->age = age;
    }
};
void change(student *s)
{
    s->name = "X";
}
int main()
{
    student s("milan", 1, 18);
    cout << s.name;
    student *ptr = &s;
    (*ptr).name = "sadanand"; // same hai dono |
    // ptr->name = "basant";                    ^
    cout << s.name;
    change(&s);
    cout << s.name;
}