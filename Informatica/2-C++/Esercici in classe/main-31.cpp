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
    do{
        cout<<"Di quanti numeri vuoi fare la media?(1-100) " <<endl;
        cin >> n;
    } while(n<=100);
    for (int x=0; x<n; x++){
        cout << "inserisci n numeri: ";
        cin >> vettore[x];
    }
    
    cout<<"La media dei tuoi numeri e': ";
    cin >> media_vett(vettore, 10);

    return 0;
}