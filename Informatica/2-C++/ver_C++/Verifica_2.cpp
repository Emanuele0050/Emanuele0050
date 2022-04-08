/******************************************************************************
 
** Verifica_2.cpp - Esercizio 2 della verifica
** Emanuele Gisonna - 16/02/2022

*******************************************************************************/
#include <iostream>
using namespace std;

void stampa_vett(int v[], int dim){
    for (int x = 0; x < dim; x++) cout << v[x] <<"\t";
    cout <<"\n";
}

int main()
{
    int dim;
    cout << "Insesci la dimensione dei vettori: ";
    cin >> dim;
    int v1[dim], v2[dim], v3[dim];
    cout <<" " <<endl;
    cout << "Vettore v1" <<endl;
    for (int i = 0; i < dim; i++){
        cout << "inserisci il valore del vettore v1 della posizione [" << i << "] ";
        cin >> v1[i];
    } 
    cout << " " <<endl;
    cout <<"Vettore v2" <<endl;
    for (int i = 0; i < dim; i++) {
        cout << "inserisci il valore del vettore v2 della posizione [" << i << "] ";
        cin >> v2[i];
    }
    cout <<" "<<endl;
    cout <<"Il vettore v1 e': ";
        stampa_vett(v1, dim);
    
    cout <<" "<<endl;
    cout <<"Il vettore v2 e': ";
        stampa_vett(v2, dim);

    cout << "" <<endl;
    cout <<"Il vettore somma di v1 e v2 cioe v3 e': ";
    for (int i = 0; i < dim; i++){
        
       v3[i] = (v1[i]+v2[i]);
        cout << v3[i]; cout << " ";

    }
    return 0;
}