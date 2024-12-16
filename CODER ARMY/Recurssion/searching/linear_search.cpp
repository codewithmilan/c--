#include<bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[],int start,int x,int n){

if(start==n) return 0;

if(arr[start]==x) return 1;
 return linearsearch(arr,start+1,x,n);


}
int main(){
    int arr[]={1,2,4,5,6,8,9};
    int x=11;
    int start=0,n=sizeof(arr)/sizeof(arr[0]);
    cout<<linearsearch(arr,start,x,n);
}