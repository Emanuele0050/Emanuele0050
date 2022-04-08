#include <iostream>
#include <fstream>
#define DIM 10
using namespace std;

int main() {
    ofstream pos("positivi.txt");
    ofstream neg("negativi.txt");
    int n;
    while(true) {
        cout << "Inserisci un numero (0 per uscire): ";
        cin >> n;
        if(n > 0) pos << n << endl; else if(n < 0) neg << n << " "; else break;
    }
}