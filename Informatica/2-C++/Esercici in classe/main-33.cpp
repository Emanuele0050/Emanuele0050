#include <iostream>
#include <climits>
using namespace std;

int min_vet(int v[], int dim) {
    int min = INT_MAX;
    for(int i = 0; i < dim; i++) {
        if(v[i] < min) min = v[i];
    }
    return min;
}

int max_vet(int v[], int dim) {
    int max = INT_MIN;
    for(int i = 0; i < dim; i++) {
        if (v[i] > max) max = v[i];
    }
    return max;
}

float med_vet(int v[], int dim) {
    int totale = 0, media;
    for(int i = 0; i < dim; i++) {
        totale += v[i];
    }
    media = (float)totale / dim;
    return media;
}

int main() {
    int dim;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> dim;
    int v[dim];
    for(int i = 0; i < dim; i++) {
        cout << "Inserisci un valore " << "(" << i + 1 << "/" << dim << ") ";
        cin >> v[i];
    }
    cout << "La media del vettore corrisponde a " << med_vet(v,dim) << ", il numero minimo e' " << min_vet(v,dim) << " mentre il mumero massimo e' " << max_vet(v,dim);
    return 0;
}