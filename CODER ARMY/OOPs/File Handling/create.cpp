#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("Milan.txt");
    fout << "Hi, this file is created trough file handling in c++\n";
    fout.close();

    ifstream fin;
    fin.open("Milan.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}