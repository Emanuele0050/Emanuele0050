/*
** Esercizio_Emanuele_Gisonna.cpp - Esercizio Emanuele Gisonna
** Autore: Emanuele Gisonna - 11/11/2021
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cout<<"Inserire una frase" <<endl;
	cout<<"dScrivi qui: ";
	getline(cin,s);
	for(int i=0; i<s.length(); i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			s[i]='a';
		}
	}
	cout<<s;
	return 0;
}
