/******************************************************************************
AUTORE: Emanuele Gisonna
DATA: 27/10/2021
PROBLEMA: Programma sulla gestione delle stringhe
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cout<<"Inserire una frase: ";
	getline(cin,s);
	for(int i=0; i<s.length(); i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			s[i]='a';
		}
	}
	cout<<s;
	return 0;
}
