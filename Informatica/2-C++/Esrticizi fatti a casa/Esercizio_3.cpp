#include <iostream>
using namespace std;

void robinHood(float &d1,float &d2){
	d1=(d1+d2)/2;
	d2=d1;
	
}


int main(){
	float x, y;
	cout << "Insersici due numeri: ";
	cin >> x >> y;
	robinHood(x, y);
	cout<<x<<" "<<y;

	
	return 0;
}
