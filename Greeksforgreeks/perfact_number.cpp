#include <iostream>
#include <vector>
using namespace std;
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin >> n;
    int rem=0,sum=0,temp=n;
    while(n>0){
        rem=n%10;
        sum+=fact(rem);
        n/=10;
    }
    if(temp==sum) cout<<" This is perfact number";
    else cout<<" This is not perfact number";
}