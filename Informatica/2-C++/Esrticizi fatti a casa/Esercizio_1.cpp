#include <iostream>
using namespace std;
int ConvSecondi(int g, int h, int m, int s){
	int gs, hs, ms, st;
	gs = g * 24 * 3600;
	hs = h*3600;
	ms = m*60;
	st = s + gs + hs + ms;
	
	return st;
}	


int main(){
	int g, h, m, s;
	cout << "Inserisci i giorni: ";
	cin >> g;
	if (h<0) {
	cout << "Errore"; 
		return 0;
	}
	cout << "Inserisci le ore: ";
	cin >> h;
	if (h<0) {
	cout << "Errore"; 
		return 0;
	}
	cout << "Inserisci i minuti: ";
	cin >> m;
	if (m<0) {
	cout << "Errore";
		return 0;
	}
	cout << "Inserisci i secondi: ";
	cin >> s;
	if (s<0) {
	cout << "Errore";
		return 0;
	}
	
	cout << ConvSecondi(g, h, m, s);
		
		
		
	return 0;
}
