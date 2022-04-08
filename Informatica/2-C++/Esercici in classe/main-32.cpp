/******************************************************************************
** Es17.cpp - Esercizio 17
** Emanuele Gisonna - 3/02/2022
*******************************************************************************/
#include <iostream>
using namespace std;

bool pippo(int v[], int dim, int n){
    for (int i = 0; i < dim; i++) {
        if (v[i] == n) return true;
    }
    return false;
}

int main()
{
    int v[10] = {1,2,3,4,6,6,7,8,9,10};
    cout << pippo(v, 10, 5);
    return 0;
}

