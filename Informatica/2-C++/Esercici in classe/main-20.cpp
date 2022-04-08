/******************************************************************************
**AUTORE: Emanuele Gisonna
**DATA: 27/10/2021
**PROBLEMA: Programma sulla gestione delle stringhe
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Inserisci una stringa" <<endl;
    cout << "Scrivi qui: ";
    getline (cin, s);
    
    cout << "Le lettere pari sono: ";
    for(int x = 1; x <= s.length(); x = x + 2) {
        cout << s[x];
    }
     cout << "\nLe lettere dispari sono: ";
    for(int x = 0; x <= s.length(); x = x + 2) {
        cout << s[x];
    }
    

    return 0;
}
