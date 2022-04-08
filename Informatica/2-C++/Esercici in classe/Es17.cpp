/******************************************************************************
** Es17.cpp - Esercizio 17
** Emanuele Gisonna - 3/02/2022
*******************************************************************************/
#include <iostream>
using namespace std;

bool verifica(int v[], int n){
    for (int i = 0; i <= 9; i++) {
        if (v[i] == n) return true;
    }
    return false;
}

int main()
{
	int n;
	cout << "Inserisci un numero intero: ";
	cin >> n;
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    
    cout << verifica(v, n);
    return 0;
}


