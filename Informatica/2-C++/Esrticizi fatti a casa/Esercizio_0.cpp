#include <iostream>
using namespace std;
float ValoreAssoluto(float r){
	if (r<0) r = r*(-1);
return r;	
}

int main(){
	float r;
	cout << "Insersci un numero: ";
	cin >> r;
	cout << ValoreAssoluto(r);
	
	return 0;
}
