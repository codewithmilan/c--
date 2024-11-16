#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, max = 0;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        if (arr[i > max])
        {
            max = arr[i];
        }
    }
    cout << " sum = " << sum << " Max = " << max;
}
