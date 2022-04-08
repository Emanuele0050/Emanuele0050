#include <iostream>
using namespace std;

float media_vett(int vettore[], int n){
    int somma=0;
    float media;
    for (int x=0; x < n; x++) somma=somma+vettore[x];
    media=(float)somma/n;
    return media;
}

int main()
{
    int n;
    int vettore[100];
    cout<<"Di quanti numeri vuoi fare la media?(1-100) " <<endl;
    cin >> n;
    if (n < 1 || n > 100) {
    	cout << "Errore";
	}
    for (int x=0; x<n; x++){
        cout << "inserisci il numero della posizione " << x <<endl; " : ";
        cin >> vettore[x];
    }
    
    cout<<"La media dei tuoi numeri e': " << media_vett(vettore, n);
    return 0;
}
