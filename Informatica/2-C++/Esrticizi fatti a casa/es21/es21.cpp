#include<iostream>
#include<fstream>
using namespace std;

int main(){
 ofstream multipli5;
 int valore;

 multipli5.open("multipli5.txt");
 cout<<"Inserire valore (0 per terminare): ";
 cin>>valore;
 while (valore!=0){
  if (valore%5==0)
	  multipli5<<valore<<endl;
  cout<<"Inserire valore (0 per terminare): ";
  cin>>valore;
 }
 multipli5.close();
}