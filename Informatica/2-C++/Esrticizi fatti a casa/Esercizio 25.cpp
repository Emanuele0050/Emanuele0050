/******************************************************************************
 
** Es_25_pag149.cpp - Esercizio 25 pag. 149 
** Emanuele Gisonna - 01/03/2022

*******************************************************************************/
#include <iostream>
using namespace std;

int mcd(int m, int n){
	int r;
	r=m%n;
while(r!=0){ 
	m=n;
	n=r; 
	r=m%n;
}
return n;
	   
}

int main(){
	int m, n;
	cout << "inserisci un numero: ";
	cin >> m;
	cout << "Inserisci un numero minore del primo: ";
	cin >> n;
	cout << mcd(m, n);
	return 0;
}
