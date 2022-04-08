/******************************************************************************
AUTORE: Emanuele Gisonna
DATA: 27/10/2021
PROBLEMA: esercitazione alla verifica
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int c = 0;
    string s;
    cout << "inserisci una frase: ";
    
    getline (cin, s);
    
    for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
        c++;
    }
    cout << c;
    return 0;
}
}

