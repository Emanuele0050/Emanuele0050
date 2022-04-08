/******************************************************************************
** Esercizinclasse.cpp - Esercizi fatti in classe  
** Autore: Emanuele Gisonna - 29/11/2021
*******************************************************************************/
#include <iostream>
using namespace std;

void scambia(int& x, int& y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void scambia(long& x, long& y) {
    int temp;
    long = x;
    x = y;
    y = temp;
}

int main()
{
    long a=11, b=90;
    cout <<"Prima di scambia, a vale " << a << " e b vale " << b << endl;
    scambia (a, b);
    cout <<"Dopo scambia, a vale " << a << " e b vale " << b << endl;

    
    cout << "Hello World";
    return 0;
}

