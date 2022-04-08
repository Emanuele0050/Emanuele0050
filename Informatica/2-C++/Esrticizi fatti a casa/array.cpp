#include <iostream>
//#define DIM 10
using namespace std;
//void stampa_vett(int v[], int dim){
    //for (int x = 0; x < dim; x++) cout << v[x] <<"\t";
    //cout <<"\n";
//}

int main(){
    string s[]={"Uno", "Due", "Tre"};
    for (int i = 0; i < 3; i++) cout << s[i] <<"\t";
    cout <<"\n";
    string m[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            m[i][j] = s[i] + "/" + s[j];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] <<"\t";
        cout <<endl;
    }
    return 0;

}
