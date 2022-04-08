#include <iostream>
using namespace std;

long fattoriale(int numero){
	int z = 1;
	for(int i = 1; i <= numero; i++) z = z * i;
    return z;
}


int main() {
	int numero, i;
	cout << "Inserisci un numero: ";
	cin >> numero;
	cout << " il fattoriale di " << numero << " e' " << fattoriale(numero) <<endl;
}

