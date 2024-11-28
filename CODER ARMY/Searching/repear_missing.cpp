#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int>digit(n);
    for (int i = 0; i < n; i++)
    {
        digit[v[i-1]]++;
    }
    
    
}
