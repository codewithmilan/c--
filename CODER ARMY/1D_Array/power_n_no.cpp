#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int power =1;
    for (int i = 0; i < n; i++)
    {
        power*=2;
    }
    cout<<power;
}