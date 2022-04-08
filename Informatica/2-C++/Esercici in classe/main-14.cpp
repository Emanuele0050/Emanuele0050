/*
AUTORE: Emanuele Gisonna
DATA: 9/11/2021
PROBLEMA: Stringhe 
*/

#include <iostream>
using namespace std;


int main() {
    string s;
    cout << "Ciao, come ti chiami?";
    cout << "\nScrivi qui il tuo nome: ";
    cin >> s;
    cout << "Ciao " +s <<endl;
    cout << "Il tuo nome è lungo " << s.length() << " caratteri" <<endl;

    for(int  i = 0; i <s.length(); i++ ) cout << s [i] << endl;

    
    for(int  i = s.length() -1; i <= s.length(); i-- ) cout << s [i] << endl;    
    
   return 0; 
    
}
    
