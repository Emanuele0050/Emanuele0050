/******************************************************************************
** Es19.cpp - Esercizio 19
** Emanuele Gisonna - 4/02/2022
*******************************************************************************/
#include <iostream>
using namespace std;

void media(int v[], int n){
    for (int i = 1; i <= n; i++){
        if (i=1)
        cout<< (v[0]+v[0]+v[i])/3;
        else if (i=n)
        cout<< (v[n]+v[n]+v[n-1])/3;
        else
        cout << (v[i]+v[+1]+v[i+1])/3;

    }
}


/*
int main()
{
    cout<<"Hello World";

    return 0;
}
*/
