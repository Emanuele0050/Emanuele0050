/*************************************************** 
** Parole paindrome.cpp - Dire a video se una parola è panindroma o no.
** Autore: EManuele Gisonna - 25/10/2021
***********************************************************/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	bool x=true;
	cout<<"Inserire una parola"<<endl;
	cout<<"Scrivi qui: ";
	cin>>s;
	for(int i=0; i<s.length()/2; i++){
		if(s[i]==s[s.length()-i-1]){
			x=true;
		}else x=false;
	}
	if(x==true){
		cout<<"La parola è palindroma.";
	}else cout<<"La parola non è palindroma.";
	
	return 0;
}
