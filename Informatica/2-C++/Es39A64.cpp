/*
** Es39A64.cpp - Esercizio 39 a pagina A64
** Autore: Emanuele Gisonna - 30/10/2021
*/

#include <iostream>
using namespace std;

int main() {
    int k, n, m, i = 0;
    cout << "Inserire il risultato";
    cout << "\nScrivi qui: ";
    cin >> k;
    while (m != 0) {
        cout << "Inserire il primo numero";
        cout << "\nScrivi qui: ";
        cin >> n;
        cout << "Inserire il secondo numero (0 per uscire)";
        cout << "\nScrivi qui: ";
        cin >> m;
        if (k == n * m) {
            i++;
        }
    }
    cout << "Le coppie che fanno " << k << " sono " << i << ".";
}
