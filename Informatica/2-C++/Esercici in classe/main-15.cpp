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
		if(s[i]==s[s.length()/2-i]){
			x=true;
		} else x=false;
	}
	if(x==true){
		cout<<"La parola è palindroma.";
	} else cout<<"La parola non è palindroma.";
	
	return 0;
}
