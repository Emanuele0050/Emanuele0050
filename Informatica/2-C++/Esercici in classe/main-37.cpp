/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;



int conta_vet(int v[], int dim, int min, int max) {
    int c = 0;
    for(int i = 0; i < dim; i++) {
        if(v[i] >= min && v[i] <= max) c++;
    }
    return c;
}


int main()
{
    int n;
    cout<<"Quanti numeri vuoi inserire? ";
    cin >> n;
    int v[n];
    for (int i=0; i < n; i++){
        
    }

    return 0;
}