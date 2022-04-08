/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

main() {
	int N,i;

	const int C=10;
	
	cout<<"Inserisci un numero: ";
	cin>>N;
	
	for(i=0;i<C;i++) {
		if(N%2!=0)
			N--;
		N+=2;
		cout<<N<<"\t";
	}

	return 0;
}