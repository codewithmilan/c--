#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter your code : ";
    getline(cin,s);
    cout<<"Enter shift (That want to shift the character ) :";
    int shift;
    cin>>shift;
    cout<<"Your Encrypted code : ";
    for(int i=0;i<s.size();i++){
        s[i]=s[i]+shift;
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }

    cout<<endl<<"Your Deccrypted code : ";
    for(int i=0;i<s.size();i++){
        s[i]=s[i]-shift;
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }


}
