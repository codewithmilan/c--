#include <iostream>
#include <stack>
using namespace std;
// BRUTE FORCE APPROACH
int main()
{
    int arr[] = {2, 3, 1, 0, 7, 6, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int nge[n];
    stack<int> st;
    nge[n - 1] = -1;
    st.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 && st.top() <= arr[i])
        {
             st.pop();
        }
        if (st.size() == 0)
            nge[i] = -1;
        else
            nge[i] = st.top();
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
}
