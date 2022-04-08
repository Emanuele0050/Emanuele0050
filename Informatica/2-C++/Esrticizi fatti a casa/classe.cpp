#include <iostream>
#define DIM 4
using namespace std;

int main(){
    float m [4][3];
    int scelta;
    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; i++)
        {
            cout << "Inserisci la rilevazione " << i+1 << "per il sensore " << j+1 << ": ";
            cin >> n[i][j];
        }   
    }
    do {
        cout <<"Di quale sensore vuoi sapere min max medi? (1-4) ";
        cin >> scelta;
    } while (scelta<1 || scelta >4); 



    
    


}