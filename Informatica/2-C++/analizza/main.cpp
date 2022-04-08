/* 
** Analizza.cpp - Analizza le caratteristiche del numero inserito 
** Autore: EManuele Gisonna - 25/10/2021
*/
#include <iostream>
using namespace std;

int main () {
  int n;
  cout << "Per farove, inserisci un numero: ";
  cin >> n;

  cout << "Il numero che hai inserito è: " << n << endl;
  if ( n != 0) {
    if (n % 2 == 0)
        {
        cout << "Il numero che hai inserito è pari";
        } else {
            cout << "Il numero che hai inserito è dispari";
        }
  } else {
    cout << "Il numero inserito è 0";
    cout << (n>=0 ? "positivo" : "negativo");
    }
    

  return 0;
}
