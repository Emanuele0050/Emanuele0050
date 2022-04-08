#include <iostream>
using namespace std;

int main(){
    int E;
    cout << "A che fascia di età appartieni?"<<endl;
    cout<<"0: da 0 a 2 anni" <<endl;
    cout<<"1: da 2 a 6 anni"<<endl;
    cout<<"2: da 6 a 11 anni"<<endl;
    cout<<"3: da 11 a 14 anni"<<endl;
    cout<<"4: da 14 a 19 anni"<<endl;
    cout<<"5: da 19 a 24 anni"<<endl;
    cin >> E;
    switch (E)
    {
    case 0:
        cout <<"Stai a casa con la mamma ";
        break;
    case 1:
        cout <<"Vai alla materna ";
        break;
        case 2:
        cout <<"Vai all'elementari ";
        break;
    case 3:
        cout <<"Vai alle medie ";
        break;
    case 4:
        cout <<"Vai alle superiori ";
        break;
    case 5:
        cout <<"Vai all'università ";
        break;
    default:
        cout <<"Vai a lavorare ";
        break;
    }
    return 0;
}
