/******************************************************************************
** Dichiarazione_vettore.cpp - Dichiarare un vettore
** Emauele Gisonna - 09/02/2022 

*******************************************************************************/
#include <iostream>
using namespace std;

void stampa_vett(int v[], int dim){
    for (int x = 0; x < dim; x++) cout << v[x] <<"\t";
    cout <<"\n";
}

int prodotto_funzione(int v[], int dim){
    int prodotto = 1;
    for (int i = 0; i < dim; i = i + 2){
        prodotto = prodotto*v[i];
    }
    return prodotto;
}

int media_vet(int v[], int dim, int n) {
    int totale = 0;
    for(int i = 0; i < n; i++) {
        random_init(v,dim);
        totale += somma_vett(v,dim);
    }
    return totale / n;
}

int main() 
{
    int dim;
    cout << "Insere la grandezza dell'array: ";
    cin >> dim;
    int v[dim];
    cout << "inserire un numero: " <<endl;
    for (int i=0; i<dim; i++){
        cout << i+1 << ") ->";
    }
    cout <<endl;
    stampa_vett(v, dim);
    
    cout << prodotto_funzione(v, dim);
    return 0;
}




