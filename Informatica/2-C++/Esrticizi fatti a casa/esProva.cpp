/*
** Autore: Matteo B. - 28/02/2022
** Spara!.cpp - Gioco creato tramite martici con sistema di punteggio
*/
#include <iostream>
#include <windows.h>
#define MATRIX 3
using namespace std;
 
void initMatrice(char m[][MATRIX], int r, int c, char n);
void stampaMatrice(char m[][MATRIX], int r, int c);
void printSlowly(string s);
bool puntoRet();
 
int main() {
    int x, y, c = 0, man = 0;
    string s;
    char m[MATRIX][MATRIX];
    initMatrice(m,MATRIX,MATRIX,'O');
    for(int a = 0; a < 9; a++) {
        cout << "Inserisci le coordinate alle quali vuoi sparare: ";
        cin >> x >> y;
        if(m[x - 1][y - 1] == 'O') {
            if(puntoRet()) {
                m[x - 1][y - 1] = 'X';
                printSlowly("BANG! Colpito!");
                c++;
            } else {
                m[x - 1][y - 1] = '/';
                printSlowly("BANG! Mancato!");
                man++;
            }
            cout << endl;
            stampaMatrice(m,MATRIX,MATRIX);
            printSlowly("Bersagli colpiti: ");
            cout << c << endl;
            printSlowly("Bersagli mancati: ");
            cout << man << endl;
        } else if(m[x - 1][y - 1] == 'X' || m[x - 1][y - 1] == '/'){
            printSlowly("Posizione gia' colpita. Colpo perso!");
            cout << endl;
        } else {
            printSlowly("Posizione non presente nel campo. Colpo perso!");
            cout << endl;
        }
        system("pause");
        system("cls");
    }
    printSlowly("Ecco le posizioni che hai colpito:");
    cout << endl;
    stampaMatrice(m,MATRIX,MATRIX);
    printSlowly("Punteggio finale di: ");
    cout << c << endl;
    return 0;
}
 
void initMatrice(char m[][MATRIX], int r, int c, char n) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            m[i][j] = n;
        }
    }
}
 
void stampaMatrice(char m[][MATRIX], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
            Sleep(70);
        }
        cout << endl;
    }
}
 
void printSlowly(string s) {
    for(int i = 0; i < s.length(); i++) {
        cout << s[i];
        Sleep(70);
    }
}
 
 
bool puntoRet() {
    return rand() % 2;
}