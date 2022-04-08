/******************************************************************************
** GuessANamber.cpp - Inovina il numero casuale scelto dal programma
** Emanuele Gisonna - 03/12/2021

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    cout<<"Indovina il numero"<<endl;
    srand( time(NULL));
    
    int count;
    for (count=1; count<10000; count++) {
        if(rand()%100 == 0) break;
    }
    cout << count << endl;
    
    
   // int n = rand() %100;

    return 0;
}
