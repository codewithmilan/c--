// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<fstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Enter element of array :\n";
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    // we save the data in existing file
    ofstream fout("Milan.txt", ios::app);
    fout << "\n// Below data is apeneded and I save the data in existing file from (sort.cpp)file.\n ";
    fout << "\nUnsorted data :";
    for (int i = 0; i < 5; i++)
    {
        fout << v[i] << " ";
    }
    sort(v.begin(), v.end());
    fout << "\nSorted data :";
    for (int i = 0; i < 5; i++)
    {
        fout << v[i] << " ";
    }
    cout << " Data appened successfully ";
    fout.close();
}