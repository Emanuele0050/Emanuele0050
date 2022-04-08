/******************************************************************************
** Fattoriale.cpp - Fattoriale 
** Autore: Emanuele Gisonna - 29/11/2021
*******************************************************************************/

#include <iostream>
using namespace std;

long fattoriale(int numero) {
    int z = 1;
    for(int i = 1; i <= numero; i++) z = z * i;
    return z;
}

int main()
{
    int numero,i;
    
    cout<< "Inserire un numero intero positivo: ";
    cin>> numero;
    cout << "Il fattoriale di " << numero << " e' " << fattoriale(numero) <<endl;
}
