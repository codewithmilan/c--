#include <iostream>
using namespace std;

// with two argument 
void printodd(int num, int n)
{

    if (num > n)
    {
        return;
    }
    // printodd(num + 2, n); // print odd number in descending order
    cout << num<<" ";
    printodd(num + 2, n);// print in assending order of odd number 

}
int main()
{
    int n;
    cin >> n;
    printodd(1, n);
}