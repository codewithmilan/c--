#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end){
    int pos=start;
    for (int i = start; i <=end; i++)
    {
        if(arr[i]<=arr[end]) {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
    
}
void quicksort(int arr[],int start,int end){
    if(start>=end) return;
    int pivot=partition(arr,start,end);
    // left
    quicksort(arr,start,pivot-1);
    // right
    quicksort(arr,pivot+1,end);
}
int main(){
    int arr[]={7,8,9,0,6,5,4,3,2,1};
    quicksort(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}