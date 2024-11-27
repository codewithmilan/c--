#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a,b,c;

    a=1;
    b=1;
    if(n==1 || n==2)
        cout << 1;
    else{
        while (n>2)
    {
        c=a+b;
        a=b; 
        b=c;
        n--;
    }
    cout << c;
}
}