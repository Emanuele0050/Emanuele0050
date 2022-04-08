#include <iostream>
#include <ctime>
#define DIM 10
using namespace std;

void inizializza_matrice (char matrice[DIM][DIM], char valore) {
    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
             matrice[i][j]=valore;
        }
    }
}

void stampa_matrice (char matrice[DIM][DIM]) {
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++) {
            cout << matrice[i][j] << "\t";
        }
        cout << endl;
    }
}

void piazza_nave (char matrice[DIM][DIM], int lunghezza) {
    int x, y;
    bool hor = rand()%2==0;
    if (hor) { 
        x=rand()%DIM; 
        y=rand()%(DIM-lunghezza);
    }
    else { 
        x=rand()%(DIM-lunghezza); 
        y=rand()%DIM;
    }
    // cout<<"Info debug (x-y-hor): "<<x<<"-"<<y<<"-"<<hor<<endl;
    if (hor) {
        for (int i=0; i<lunghezza && y+i<DIM; i++)
        matrice[x][y+i]='X';
    }
    else {
        for(int j=0; j<lunghezza && y+j<DIM; j++)
        matrice[x+j][y]='X';
    }
}

int main()
{
    srand(time(NULL));
    char m[DIM][DIM];
        inizializza_matrice(m,'o');
        piazza_nave(m,3);
        piazza_nave(m,4);
        piazza_nave(m,5);
    char s;
    int colonna, riga;
    while (true) {
        stampa_matrice(m);
        cout << "Vuoi sparare (S/N)? ";
        cin >> s;
        if (s!='S') break;
        cout << "Inserisci la riga (0-9): ";
        cin >> riga;
        cout << "Inserisci la colonna (0-9): ";
        cin >> colonna;
        m[riga][colonna]='X';
    }
    return 0;
}