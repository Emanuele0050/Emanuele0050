#include<iostream>
#define DIM 100
using namespace std;

float quotaMassima(float M[][DIM], int n, int m) {
	int i, j;
	float max = M[0][0];

	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			if(M[i][j] > max)
				max = M[i][j];
	return max;
}

float quotaMinima(float M[][DIM], int n, int m) {
	int i, j;
	float min = M[0][0];

	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			if(M[i][j] < min)
				min = M[i][j];
	return min;
}

float quotaMedia(float M[][DIM], int n, int m) {
	int i, j;
	float somma = 0;

	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			somma += M[i][j];

	return somma / (n*m);
}

int main() {
	float M[DIM][DIM];
	int n, m, i, j;
	cout << "Numero righe matrice (max 100)..: ";
	cin >> n;
	cout << "Numero colonne matrice (max 100): ";
	cin >> m;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++) {
			cout << "Inserisci la quota del territorio "
				 << "in posizione [" << i << "][" << j << "]: ";
			cin >> M[i][j];
		}
	cout << "Quota minima.: " << quotaMinima(M, n, m) << endl;
	cout << "Quota massima: " << quotaMassima(M, n, m) << endl;
	cout << "Quota media..: " << quotaMedia(M, n, m) << endl;
}
