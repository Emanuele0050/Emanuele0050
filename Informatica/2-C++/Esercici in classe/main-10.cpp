/*
AUTORE: Emanuele Gisonna
DATA: 29/10/2021
PROBLEMA: Es 36 Pag. A64
*/

#include <iostream>
using namespace std;

int main() {
    int n=0;
    int somma=n+0;
    
        while (somma <100) {
            
    cout<<"Inserisci un numero per favore" <<endl;
    cout<<"Scrivi qui: ";
    cin>>n;
    somma = somma + n;
    
    }  
    
    cout<<"La somma è: " <<somma;
    
    return 0;
}

