#include <iostream>
#define DIM 10
using namespace std;

int somma_vett(int v[5], int n){
    int somma = 0;
    for (int i = 0; i < n; i++){
        somma = somma + v[i];
    }
    return somma;
}

int somma_numeri(int a, int b, int c){
    float somma;
    a=10;
    b=4;
    c=5;
    somma = a + b + c;
    return somma;
}

int azzera_matrice(int m[DIM][DIM]){
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++){ 
            m[i][j] = 0;
        }

}

void azzera_matrice(int m[DIM]){
    for (int i=0; i<DIM; i++) {
            m[i] = 0;
        }

}