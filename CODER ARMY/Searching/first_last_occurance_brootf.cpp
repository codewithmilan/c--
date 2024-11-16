#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target of element : ";
    int target;
    cin >> target;
    int first=-1,last=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            first=i;
          break;
        }
    }
    for (int i = n-1; i >=0; i--)
    {
        if (arr[i]==target)
        {
            last=i;
            break;
        }
    }
    if (first == -1 && last == -1)
        cout << "Element not present ";
    else
        cout << first << " " << last;
}