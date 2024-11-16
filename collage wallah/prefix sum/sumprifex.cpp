
// wap to add prifix array [ 1,2,3,4,5]= [1,3,6,10,15]
#include <iostream>
using namespace std;
int main()
{
    int n, prefix = 0;
    cout << "Enter the vlaue of n :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}