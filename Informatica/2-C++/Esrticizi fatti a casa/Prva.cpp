/*
** Autore: Emanuele Gisonna - 04/03/2022
** Spara!.cpp - Gioco creato tramite martici con sistema di punteggio
*/
#include <iostream>
//#include <windows.h>
#define DIM 10
using namespace std;

void piazzaNave(char m[DIM][DIM], int l){
int x = rand()%DIM;
int y = rand()%DIM;
//m[x][y]='x' 
bool hor = rand()%2 == 0;
if (hor){
    for (int i = 0; i < l && y + i < DIM; i++) m[x][y+i]='x'; 
     else for (int j = 0; j < l &&  y + j; j++ ) m[x][y+i]='x';
}


void inizializza_matrice (int a[][4], int r, int c, int n){
  for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
	   a[i][j]=n;
      }
    }
}

void stampa_matrice (int a[][4], int r, int c){
  for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
	  cout << a[i][j] <<" ";
      }
      cout << endl;
    }
}

int main(){

    return 0;
}