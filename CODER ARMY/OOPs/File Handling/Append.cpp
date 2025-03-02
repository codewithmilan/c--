#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fin("Milan.txt", ios::app);
    fin << "New data is added in same file through ios::app.\n";
    cout << "data added successfully !";
   
    fin.close();
}