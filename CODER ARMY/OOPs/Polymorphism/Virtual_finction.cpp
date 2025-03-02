#include <iostream>
using namespace std;
class animal
{
public:
// hm agar yhn virtual keyword nhi lagate hhai to mera output 
// animal make sound aayega
// virtual keyword lagane ke bbad mera output jis v object se kiya gya hoga uska member member function call hoga 
    virtual void speak()
    {
        cout << "Animal make sound " << endl;
    }
};
// child class
class dog : public animal
{
public:
    void speak()
    {
        cout << "Dog Barks " << endl;
    }
};
class cat : public animal
{
public:
    void speak()
    {
        cout << "cat meows " << endl;
    }
};
int main()
{
    animal *a1;
    // a1.speak();

    a1 = new dog();
    a1->speak();
}