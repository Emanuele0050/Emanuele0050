#include <iostream>
#include <climits>
#define DIM 3
using namespace std;

void stampaMatrice(int m[][DIM], int r);
float mediaColonna(int m[][DIM], int i);
float maxColonna(int m[][DIM], int i);
float minColonna(int m[][DIM], int i);
 
int main() {
    int r;
    cout << "Inserisci il numero di sensori di temperatura: ";
    cin >> r;
    int m[r][DIM];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < DIM; j++) {
            cout << "Inserisci la temperatura numero " << j + 1 << " per il sensore " << i + 1 << ": ";
            cin >> m[j][i];
        }
    }
    for(int i = 0; i < r; i++) cout << "La media del sensore numero " << i + 1 << " e' di " << mediaColonna(m,i) << ", la temperatura massima e' di " << maxColonna(m,i) << " ed infine la minima e' uguale a " << minColonna(m,i) << endl;
}
 
void stampaMatrice(int m[][DIM], int r) {
    for(int i = 0; i < DIM; i++) {
        for(int j = 0; j < r; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}
 
float mediaColonna(int m[][DIM], int i) {
    int somma = 0;
    for(int j = 0; j < DIM; j++) somma += m[j][i];
    return (float)somma / DIM;
}
 
float maxColonna(int m[][DIM], int i) {
    int max = INT_MIN;
    for(int j = 0; j < DIM; j++) {
        if(m[j][i] > max) max = m[j][i];
    }
    return max;
}
 
float minColonna(int m[][DIM], int i) {
    int min = INT_MAX;
    for(int j = 0; j < DIM; j++) {
        if(m[j][i] < min) min = m[j][i];
    }
    return min;
}