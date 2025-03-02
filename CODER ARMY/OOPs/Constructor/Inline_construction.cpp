#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    string sec;

    // // default construction
    // student()
    // {
    //     cout << "Construction are called " << endl;
    // }

    student(string a, int b, string c) : name(a), rollno(b), sec(c) {}
    void display()
    {
        cout << name << " " << rollno << " " << sec << endl;
    }
};
int main()
{
    // student a1;
    student A1("Milan", 1, "A");
    A1.display();
}