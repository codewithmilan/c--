#include <iostream>
using namespace std;
void pairsum(int arr[], int n)
{
    int x, count = 0;
    cout << "Enter x:";
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                count++;
            }
        }
    }
    cout << count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    pairsum(arr, n);
}
