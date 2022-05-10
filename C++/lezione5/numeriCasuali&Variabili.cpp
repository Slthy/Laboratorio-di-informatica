#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int seme;
    cout<<"Inserire seme: ";
    cin>>seme; /*chiedo all'utente di inserire un numero che fungerà da seme 
                per la generazione dei numeri pseudocasuali*/
    srand(seme);
    int randomValue1 = rand(); //genero il valore con il seme dell'utente
    srand(time(NULL)); /*imposto il seme del generatore pseudocasuale a 
                        prendere come seme il numero di cicli eseguiti dalla cpu fino a questo momento*/
    int randomValue2 = rand();

    cout<<"Valore 1: "<<randomValue1<< " Valore 2: "<<randomValue2<<endl;

    return 0;
}