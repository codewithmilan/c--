#include <bits/stdc++.h>
using namespace std;
int kthElement(int a[], int b[], int k)
{
    // code here

    // int n = a.size(), m = b.size();
    int n = 6, m = 3;

    vector<int> temp(m + n);
    int start = 0, end = 0, index = 0;
    while (start < n && end < m)
    {

        if (a[start] < b[end])
        {
            temp[index] = a[start];
            start++, index++;
        }
        else
        {
            temp[index] = b[end];
            end++, index++;
        }
    }

    // a array is not empty yet

    while (start < n)
    {
        temp[index] = a[start];
        index++, start++;
    }
    // b array isnot empty
    while (end < m)
    {
        temp[index] = b[end];
        end++, index++;
    }
    int z = temp.size();
    // cout << z;
    // cout << temp[3];
    for (int i = 0; i < z; i++)
    {
        cout << temp[i] << " ";
    }

    for (int i = 0; i < z; i++)
    {
        if (temp[i] == k)
            return i;
    }
    // for (int i = 0; i < z; i++)
    // {
    //     if (temp[i] == k)
    //         return temp[i];
    // }
}
int main()
{
    int a[] = {1, 4, 5, 6, 7, 8};
    int b[] = {2, 3, 9};
    int k = 8;
    cout <<"\n"<< kthElement(a, b, k);
}