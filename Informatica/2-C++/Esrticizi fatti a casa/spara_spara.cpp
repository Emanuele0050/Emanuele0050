/******************************************************************************
 
** Spara_Spara.cpp - Esercizio  spara spara 
** Emanuele Gisonna - 27/02/2022

*******************************************************************************/
#include <iostream>
using namespace std;

void initMatrice(char m[][10], int r, int c, char n) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            m[i][j] = n;
        }
    }
}

void stampaMatrice(char m[][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int x, y;
    char m[10][10];
    initMatrice(m,10,10,'O');
    stampaMatrice(m,10,10);
    while(true) {
        cout << "Inserisci le coordinate alle quali vuoi sparare: ";
        cin >> x >> y;
        m[x - 1][y - 1] = 'X';
        stampaMatrice(m,10,10);
        cout << "Premi un tasto per continuare...";
        system("pause");
        system("reset");
    }
 
    return 0;
}