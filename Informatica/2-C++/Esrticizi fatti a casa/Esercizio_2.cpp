#include <iostream>
using namespace std;

float ProdottoDifferenza(float a, float b, float c){
	float prod, somma, diff;
	prod = a * b * c;
	somma = a + b + c;	
	diff = prod - somma;
	return diff;
}

int main(){
	float a, b, c;
	cout << "Insersici il primo numero: ";
	cin >> a;
	cout << "Insersici il secondo numero: ";
	cin >> b;
	cout << "Insersici il terzo numero: ";
	cin >> c;
	cout <<ProdottoDifferenza(a, b, c);
	
	return 0;
}
