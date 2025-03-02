#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    string sec;
    void display()
    {
        cout << name << " " << rollno << " " << sec << endl;
    }
};

int main()
{
    student *s1 = new student;
    (*s1).name = "milan";
    (*s1).rollno = 1;
    (*s1).sec = "A";
    cout << (*s1).name << " "; // we can acces this type also
    cout << s1->rollno << " "; //     "
    // student s2("basant", 2, 2000);
    s1->display();
}