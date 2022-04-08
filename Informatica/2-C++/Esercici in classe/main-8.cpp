/*
AUTORE: Emanuele Gisonna
DATA: 27/10/2021
PROBLEMA: Valutazione dei punteggi
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    do{
        cout<< "Inserisci il tuo voto (da 0 a 100) : ";
        cin>>n;
    }while(n<0||n>100);

    cout<<"Il tuo voto e' ";

    if (n>=0 && n<=40) cout<<"E\n";
    else if (n>=41 && n<=60) cout<<"D";
    else if (n>=61 && n<=70) cout<<"C";
    else if (n>=71 && n<=85) cout<<"B";
    else if (n>=86 && n<=100) cout<<"A";

    return 0;
}

