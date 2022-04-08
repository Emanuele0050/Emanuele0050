#include <iostream>
using namespace std;

int main(){
    float E;
    cout << "Inserisci l'età: ";
    cin >> E;
    if (E<=15)
    cout << "La patente non la puoi prendere";
    if (E==16) 
    cout << "La patente la puoi prendere solo negli USA";
    if (E==17)
    cout << "La patente la puoi prendere solo in Germania e negli USA";
    if (E>=18 && E<21)
    cout << "La patente la puoi prendere in Italia, USA, Germania";
    if (E==21)
    cout << "La patente la puoi prendere in Polonia, Italia, USA, Germaia";
    if(E>21)
    cout << "La patente la puoi prendere in tutti gli stati";



    return 0;
}