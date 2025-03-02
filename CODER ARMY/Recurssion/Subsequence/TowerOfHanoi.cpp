#include <iostream>
#include <math.h>
using namespace std;
void toh(int n, char s, char h, char d)
{
    if (n == 1)
    {
        cout << "move disk " << "from " << n << " " << s << " to " << d << endl;
        return;
    }
    toh(n - 1, s, d, h);
    cout << "move disk " << "from " << n << " " << s << " to " << d << endl;
    ;
    toh(n - 1, h, s, d);
}
int main()
{
    int n;
    cin >> n;
    toh(n, 's', 'h', 'd');
    cout << "You can move disk total time :" << pow(2, n) - 1;
}