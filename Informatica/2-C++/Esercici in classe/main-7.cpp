/* 
** Analizza.cpp - Analizza un voto e da un giudizio
** Autore: EManuele Gisonna - 25/10/2021
*/ 

#include <iostream>

using namespace std;
int main()
{
    int n; 
    cut<< "inserisci un voto da 0 a 10: ";
    cin>>n
    if(n<=3) cout<<"Molto basso"<<endl;
    if(n>3 && n<=5) cout<<"Basso"<<endl
    if(n==6) cout<<"Nella media"<<endl
    if(n==7) cout<<"Discreto"<<endl
    if(n==8) cout<<"Buono"<<endl
    if(n==9) cout<<"Distinto"<<endl
    if(n==10) cout<<"Ottimo"<<endl

    return 0;
}
