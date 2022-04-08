#include <iostream>
using namespace std;

int somma_prodotto(int a, int b){

if (a%2 == 0 && b%2 == 0)

return a + b;

else return a * b;
	
}






int main(){

int a, b;

cout << "Inserisci il primo numero intero positivo: ";
cin >> a;
cout << "Inserisci il secondo numero intero positivo: ";
cin >> b;
cout << somma_prodotto(a, b);

}
