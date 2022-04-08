/******************************************************************************
 
** Es_16__20_25_Pag.148 e seguenti.cpp - Esercizi 16, 20 e 25. 
** Emanuele Gisonna - 27/02/2022

*******************************************************************************/
#include <iostream>
using namespace std;
void  converti(int &r, int &g, int &b, int &c, int &m, int &g1){
    m = 255 - r;
    c = 255 - g;
    g1 = 255 - b;
}


int main(){
    int m, c, g1, r = 1, g = 2, b = 3;
    converti (r, g, b, c, m, g1);
    cout << m <<endl;
    cout << c <<endl;
    cout << g1 <<Sitoendl;
    return 0;
    }
    