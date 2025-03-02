#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("Milan.txt");
    ofstream fout("MilanX.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line;
        fout << line;
    }
    fin.close();
    fout.close();
}