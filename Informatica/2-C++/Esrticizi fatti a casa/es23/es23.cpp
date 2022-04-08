#include<iostream>
#include<fstream>
using namespace std;

int main(){
 ofstream minori,maggiori;
 ifstream numeri;
 int valore,n;

 numeri.open("numeri.txt");
 minori.open("minori.txt");
 maggiori.open("maggiori.txt");
 cout<<"Inserire valore di riferimento: ";
 cin>>valore;
 numeri>>n;
 while (!numeri.eof()){
  if (n>valore)
	  maggiori<<n<<endl;
  else if(n<valore)
	  minori<<n<<endl;
  numeri>>n;
 }
 numeri.close();
 maggiori.close();
 minori.close();
}