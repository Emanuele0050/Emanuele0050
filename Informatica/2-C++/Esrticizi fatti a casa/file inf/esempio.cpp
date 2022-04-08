#include <fstream>
using namespace std;
int main() {
    ifstream fin1("file1.txt");
    ifstream fin2("file2.txt");
    ofstream fout("unione.txt");
    char a;
    while(fin1.get(a))
    {
        fout<<a;
    }
    fin1.close();
    while(fin2.get(a))
    {
        fout<<a;
    }
    fin2.close();
    fout.close();
    
}