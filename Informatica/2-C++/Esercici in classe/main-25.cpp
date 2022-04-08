/******************************************************************************
** Verifica.cpp -   Verifica fatta in classe - dato un numero mi dica se questo  è primo.  
** Autore: Emanuele Gisonna - 29/11/2021
*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
int n, d=1, conta=0;
		
	do {
		cout<<"inserisci un numero: ";
                cin>>n;		
	} while (n<1);
    
	while(conta<=1 && d<=n/2) {
		if(n%d==0)  
{
			conta++;
                }	
		d++;
	}
	
	if (conta==1)
{
	   cout<<"Il numero e' primo";
	} else
 {
	   cout<<"Il numero non e' primo";
	
}
	return 0;	
}