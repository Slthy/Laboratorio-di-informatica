#include <iostream> //importo la libreria input-output
using std::cin;
using std::cout;
using std::endl; //utilizzo gli identificatori standard dei metodi cout, cin e endl dalla libreria 'iostream'

int main (){
    int eta; //inizializzo la variabile per l'età dell'utente
    cout<<"Inserisci di seguito la tua età: ";
    cin>>eta; //inserisco nella variabile il valore inserito dall'utente
    if (eta >= 18) //se l'età dell'utente allora vuol dire che è maggiorenne. 
                   //Invece, se l'età è inferiore ai 18 anni, gli anni che mancano all'utente per poter guidare è pari a '18-anni'
        cout<<"Sei maggiorenne, puoi guidare."<<endl;
    else
        cout<<"Sei ancora minorenne, per guidare dovrai ancora aspettare " << (18 - eta) <<" anni/o."<<endl;

    return 0;
}