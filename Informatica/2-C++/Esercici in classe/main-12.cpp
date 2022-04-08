#include <iostream>
using namespace std;

int main() {
    int n, old = 0, count = 0;
    bool crescente = true;
    cout << "inserire i valori desiderati (0 per uscire)";
    cout << "\nScrivi qui: ";
    do {
        cout << "Inserisci il prossimo numero";
        cout << "\nScrivi qui: ";
        cin >> n;
        if (n != 0 && old) count++; else crescente = false;
        old = n;
    } while (n != 0); 
    if (crescente) cout << "Hai inserito" << count << " i numeri in ordine " << endl;
    else cout << "I numeri inseriti non sono in ordine crescente " << endl;
}
    
}