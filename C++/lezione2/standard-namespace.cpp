#include <iostream>

int main (){
    int numero_preferito;
    std::cout<<"Inserisci il tuo numero preferito tra 1 e 100: ";
    /*  in questo enunciato ho indicato esplicitamente al compilatore di
        utilizzare il nome cout preso dallo spazio dei nomi standard
        std è lo spazio dei nomi
    */

    std::cin>>numero_preferito;
    /*  in questo enunciatoho indicato esplicitamente
        al compilatore di utilizzare il nome cin preso dai nomi standard
        >> è l'operatore di estrazione (estrae dalla tastiera un valore
        e lo memorizzanella variabile che segue a destra)
    */
    
    std::cout<<"Straordinario, anche questo è il mio numero"<<std::endl;
    /*  in questo enunciato ho indicato esplicitamente al compilatore di
        cout e endl dallo spazio dei nomi standard
    */

    return 0;

}