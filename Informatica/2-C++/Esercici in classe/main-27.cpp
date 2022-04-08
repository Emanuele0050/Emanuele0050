/******************************************************************************
** Esercizinclasse.cpp - Esercizi fatti in classe - Dati N numeri
positivi e negativi determinare il massimo fra i valori positivi 
** Autore: Emanuele Gisonna - 29/11/2021
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int numero, positivi=0, negativi=0, conta=0;
    
    while (numero !=0)
    {
    
    cout<<"Inserire un numero intero (zero per uscire): ";
    cin >> numero; 
    if (numero>0) positivi++;
    if (numero<0) negativi ++;
    conta++;
    
    cout << "I numeri positivi sono: " <<positivi <<endl;

    return 0;
}
}