#include <iostream> //importo la libreria input-output
using std::cin;
using std::cout;
using std::endl; //utilizzo gli identificatori standard dei metodi cout, cin e endl dalla libreria 'iostream'

int main (){
    int numero; //inizializzo la variabile per un numero intero
    cout<<"Inserire un numero intero positivo: ";
    cin>>numero; //inserisco il valore immesso dall'utente nella variabile 'numero'
    cout<<"Ecco i numeri dispari più piccoli del valore inserito";
    for (int i = 0; i < numero; i++) if (i%2 == 1) cout<<'\t'<<i; //stampo ogni numero inferiore alla variabile 'numero' che diviso per 2 ha resto 1 (condizione di disparità)

    return 0;
}