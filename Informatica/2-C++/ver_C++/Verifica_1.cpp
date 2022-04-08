/******************************************************************************
 
** Verifica_1.cpp - Esercizio 1 della verifica
** Emanuele Gisonna - 16/02/2022

*******************************************************************************/
#include <iostream>
using namespace std;

void random_init(int vett[], int len){
    for (int i=0; i<len; i++) vett[i]=1+rand()%100;
}



void stampa_vett(int v[], int dim){
    for (int x = 0; x < dim; x++) cout << v[x] <<"\t";
    cout <<"\n";
}

int somma_vett(int v[], int n){
    int somma = 0;
    for(int i = 0; i < n; i++) somma+=v[i];
    return somma;
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
    
    int v[10];
    for(int i = 0; i < 10; i++){
        if(i%2 == 0) v[i] = 0;
        
        else v[i] = 1;
    }
    
    stampa_vett(v, 10);
    cout <<" " <<endl;
    cout << media_vet(v, 10, 2) <<endl;

    return 0;
}