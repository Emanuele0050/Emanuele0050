/******************************************************************************
** Esercizinclasse.cpp - Esercizi fatti in classe  
** Autore: Emanuele Gisonna - 29/11/2021
*******************************************************************************/

#include <iostream>

using namespace std;

string asterisca(int n) 
{
    string res="";
    for (int i=0; i<n; i++) res = res + "*,";
    return res;
}

int main()
{
    cout << asterisca(5);

    return 0;
}