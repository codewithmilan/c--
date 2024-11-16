// wap to short anarray in even and odd in the  form int which even number comes into first  and odd in the laast .
#include <iostream>
#include <vector>
using namespace std;
void sortarray()
{
    int left_ptr = 0;
    int right_ptr = 0;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 == 1 && v[right_ptr % 2 == 0])
        {
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++, right_ptr--;
        }
        if (v[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] % 2 == 0)
        {
            right_ptr--;
        }
    }
    return ;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    sortarray(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}