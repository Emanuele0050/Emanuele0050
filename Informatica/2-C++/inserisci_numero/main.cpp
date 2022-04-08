/*
AUTORE: Emanuele Gisonna
DATA: 27/10/2021
PROBLEMA: Inserisci un numero definito
*/
#include <iostream>
using namespace std;

int main()
{
    int n=10;
    int contatore=1;
    int somma=0;
    cout<<"Inserisci il numero 3 per favore" <<endl;
    cout<<"Scrivi qui: ";
    cin>>n;
        somma=somma+n;
    while (n!=3) {
        cout << "\nInserisci il numero 3 per favore";
        cout<<"\nScrivi qui: ";
        cin>>n;
    contatore++;
    somma=somma+n;
    
    }
    if (contatore == 1)
     cout<<"\nHai ripetuto il comando " << contatore << " volte";
    else  cout<<"\nHai ripetuto il comando " << contatore << " volte";
    
    cout<<"\nLa somma è "<<somma;

    
    return 0;
}

