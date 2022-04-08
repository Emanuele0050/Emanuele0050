/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int somma = 0;
     for (int n=1; n<=20; n++) {
         somma = somma + n;
     }
     cout <<"la somma dei primi 20 numeri è: " << somma << endl;
   
    return 0;
}
