/*
** Es45A65.cpp - Esercizio 45 pagina A65
** Autore: Emanuele Gisonna - 29/10/2021
*/
#include <iostream>
using namespace std;

int manin () {
    int cb = 0, ore = 0;
    cout << "Inserire la popolazione batterica iniziale";
    cout << "\nScrivi qui: ";
    cin >> cb;
    cout << "Inserire in numero di ore trascorse";
    cout <<"\nScrivi qui: ";
    cin >> ore;
    for (int x = 0; x < ore; x++) {
        cb = cb * 2;
    }
    cout << "La popolazione batterica dopo " << ore << " ore e di " << cb; 
}