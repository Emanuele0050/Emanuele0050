/******************************************************************************
** HelloFunction.cpp - Mostra i funzionamento delle funzioni
** Autore: Emanuele Gisonna - 29/11/2021
*******************************************************************************/
#include <iostream>
using namespace std;

int incrementa(int x) {
    return x+1;
}

int fattoriale (int n)
{
  int r = 1;
  for (int i = 1; i <= n; i++)
    r = r * i;
  return r;
}

string saluta(string nome) {
    string s = "Ciao " + nome;
    return s;
}
string rovescia (string nome) {
    string s(nome.rbegin(), nome.rend());
    string s2 = "Ciao " + s;
    return s2;
}

void pensacitu() {
    cout<< "Ciao sono quello che pensa al posto tuo";
    return;
}

float massimo(float a, float b) {
    if (a > b) {
        return a;
    } else return b;
}

float media(float valore1, float valore2, float valore3) {
    float media = (valore1 + valore2 + valore3) / 3;
    return media;
}

int
main ()
{
  pensacitu();
  cout <<endl << fattoriale (6) <<endl;
  cout << saluta("Emanuele") <<endl;
  cout << rovescia("Emanuele") << endl;
  cout << massimo(5.7, 6.3) <<endl;
  cout << media(12, 49, 89) <<endl;
  return 0;
}



