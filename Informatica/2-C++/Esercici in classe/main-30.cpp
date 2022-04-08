/******************************************************************************
** TestArrey.cpp - Test Arrey
** Emanuele Gisonna - 31/01/2022
*******************************************************************************/

#include <iostream>
using namespace std;
void init_vett(int v[], int dim, int val){
    for (int x = 0; x < dim; x++){
    v[x] = rand()%100;
    
    } 
}

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

int main(){
    srand(time (NULL)); 
    int w[10];
    init_vett(w, 10, 2);
    stampa_vett(w, 10);
    random_init (w, 10);
    cout << somma_vett(w, 10) <<endl;
    cout << media_vet(w, 10, 2) <<endl;
    return 0;

}



