/******************************************************************************
 
** Es_16__20_25_Pag.148 e seguenti.cpp - Esercizi 16, 20 e 25. 
** Emanuele Gisonna - 27/02/2022

*******************************************************************************/
#include <iostream>
using namespace std;
void  converti(int &r, int &g, int &b){
    r = 255 - r;
    g = 255 - g;
    b = 255 - b;
}


int main(){
    int r = 1, g = 2, b = 3;
    converti (r, g, b);
    cout << r <<endl;
    cout << g <<endl;
    cout << b <<endl;
    
    return 0;
    }
    

