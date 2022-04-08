/******************************************************************************
** ContaVocali.cpp - Chiedere una frase all'utente e dirgli quante vocali ci sono
** Emanuele Gisonna - 10/12/2021
*******************************************************************************/
#include <iostream>
using namespace std;

int vocali(string s){
    int c = 0;
    string r = "";
    
    for (int i = 0; i <= s.size(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            c++;
    }
   return c; 
}

int main()
{
    string s;
    
    cout << "Scrivi una frase: ";
    getline(cin, s);
    cout << "La tua frase ha " << vocali(s) << " vocali.";

    return 0;
}
