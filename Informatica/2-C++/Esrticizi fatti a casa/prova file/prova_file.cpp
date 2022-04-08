#include <iostream>
#include <fstream>
#define DIM 10
using namespace std;

int main() { 
    cout <<"Programma avviato";

  ofstream MyFile("tavola_pitagorica.txt");

  for (int i = 1; i <= DIM; i++)
  {
      for (int j = 1; j <= DIM; j++)
      {
          MyFile << "[" << i * j << "]";
      }
      MyFile <<endl;
      
  }

  MyFile.close();
}