#include <iostream>
using namespace std;

int main () {
    int l;
    do{ //Ciclo di controllo: chiede la lunghezza dell'array finchè l'utente non immette un valore maggiore di 0
        cout<<"Inserire dimensioni array (lunghezza > 0): ";
        cin>>l;
    } while (l < 0);
    float array [l]; //Dichiaro l'array di dimensione 'l'
    for (int i = 0; i < l; i++){
        cout<<"Inserire dimensioni il "<<(i+1)<<"o elemento dell'array: ";
        cin>>array[i];
    }
    int iMin = 0; //Considero inizialmente il primo elemento dell'array come il valore minore
    for (int i = 1; i < l; i++) if (array[i]<array[iMin]) iMin = i; /*successivamente itero per il resto dell'array, 
                                                                    /cambiando il valore dell'indice minimo 'iMin' 
                                                                    se l'elemento corrente è minore di array[iMin]*/

    cout<<"L'elemento più piccolo dell'array si trova all'indice '"<<iMin<<"', con il valore di '"<<array[iMin]<<"'."<<endl;

    return 0;
}