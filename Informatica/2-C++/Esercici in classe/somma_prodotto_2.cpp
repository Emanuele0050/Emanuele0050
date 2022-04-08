#include <iostream>
using namespace std;

bool somma_prodotto(int a, int b){

if (a%2 == 0 && b%2 == 0)

return true;

else return false;
	
}






int main(){

int a, b, c;

cout << "Inserisci il primo numero intero positivo: ";
cin >> a;
cout << "Inserisci il secondo numero intero positivo: ";
cin >> b;
if (somma_prodotto (a, b)) {
	c = a + b;
	cout << "Sono entrambi positivi e la loro somma e' " << c;
}

else {
	c = a* b;
	cout << "Non sono entrambi positivi e il loro prodotto e' " << c;
}



//cout << somma_prodotto(a, b);

}
