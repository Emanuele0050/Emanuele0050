/******************************************************************************
** Verifica.cpp - Verifica fatta in classe  - Inserito un numero intero comunicare se ha almeno due divisori
** Autore: Emanuele Gisonna - 19/01/2022
*******************************************************************************/
#include<iostream>
using namespace std;
int main (){
	int n; int i = 1;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	if( n == 0 )
	{
		cout<<"Non esistono divisori per il numero " << n;
	}
	
	else{
	cout<<"I divisori di "<<n<<" sono: ";
	while( i < n )
	{
		if ( n%i == 0 ) 
		{
    		cout << i << " , ";
    	}
    	i = i + 1;
	}

	}
	return 0;
}