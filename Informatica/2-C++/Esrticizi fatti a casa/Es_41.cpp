#include<iostream>
using namespace std;

bool predomDiagonale(int m[][100], int n)
{
	int i, j;

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			if ((i!=j) && (m[i][i] <= m[j][i]))
				return false;

	return true;
}

int main() {
	int M[100][100];
	int i,j,n;
	cout<<"Inserire ordine matrice: ";
	cin>>n;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++){
			cout<<"Inserisci M["<<i<<"]["<<j<<"]: ";
			cin>>M[i][j];
		} 
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			cout<<M[i][j]<<'\t';
		cout<<endl;
	} 

    if (predomDiagonale(M,n))
	 cout<< "Matrice a predominanza diagonale" <<endl;
	else
	 cout<< "Matrice non a predominanza diagonale" <<endl;
}
