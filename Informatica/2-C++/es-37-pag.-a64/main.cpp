/*
AUTORE: Emanuele Gisonna
DATA: 29/10/2021
PROBLEMA: Es 37 Pag. A64
*/

#include <iostream>
using namespace std;


int main() {
    int h, k, n, y;
      cout << "Inserisci un valore numerico h" <<endl;
      cout << "scrivi qui: "; 
      cin >> n;
      cout << "Inserisci un valore numerico h" <<endl;
      cout << "scrivi qui: ";
      cin >> n;
    
    while (n!=0) { 
        cout << "Inserisci un numero e quando ne hai inserito abbastanza inserisci 0: " <<endl;
        cin >> n;
        
        if(n > h && n < k)
        y = y + 1;
        



    }
    cout << "Fra tutti i numeri che hai messo " << y <<"\nAppartiene all'intervallo tra" << h << "e" << k;
    return 0;
}
