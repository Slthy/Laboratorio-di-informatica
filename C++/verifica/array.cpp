#include <iostream> //importo la libreria input-output
using std::cin;
using std::cout;
using std::endl; //utilizzo gli identificatori standard dei metodi cout, cin e endl dalla libreria 'iostream'

int main (){
    int size; //inizializzo la variabile per la grandezza dell'array
    cout<<"Inserire dimensione array: ";
    cin>>size; //inserisco nella variabile 'size' il valore inserito dall'utente
    int array [size]; //inizializzo un array di dimensione 'size'
    for (int i = 0; i < size; i++){ //riempio l'array chiedendo all'utente di inserire un numero per ogni posizione posizione nell'array inizializzato precendentemente
        cout<<"Inserire il "<<i+1<<"o numero dell'array: ";
        cin>>array[i];
    }

    int iMax = 0; //Considero inizialmente il primo elemento dell'array come il valore maggiore
    for (int i = 1; i < size; i++) if (array[i]>array[iMax]) iMax = i;  //per i successivi valori dell'array, se il valore presente all'indice 'i'
                                                                        //del ciclo (array[i]) è maggiore del valore presente all'indice
                                                                        //'iMax' dell'array (array[iMax]), cambio il valore della variabile 'iMax' con il valore dell'iteratore

    cout<<"L'elemento più grande dell'array si trova all'indice '"<<iMax<<"', con il valore di '"<<array[iMax]<<"'."<<endl;
    

    return 0;
}