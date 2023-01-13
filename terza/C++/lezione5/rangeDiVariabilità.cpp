#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL)); /*imposto il seme del generatore pseudocasuale 
                        a prendere come seme il numero di cicli eseguiti 
                        dalla cpu fino a questo momento*/
    int random50_100 = (rand() % 51) + 50; /*genero un numero random da 0 a 50
                                             e successivamente aggiungo 50 (range 50-100)*/
    float random0_1 = float(rand()) / float(RAND_MAX); /*genero un numero random e lo divido
                                                         e lo divido per la costante 'RAND_MAX',
                                                         la quale contiene il numero massimo generabile 
                                                         attraverso la funzione rand().
                                                         Per questo motivo, il risultato 'n' della divisione 
                                                         sarà sempre 0 <= n <= 1, con la probabilità di avere come
                                                         risultato 0 o 1 prossima allo zero*/

    cout<<"Valore 1: "<<random50_100<< " Valore 2: "<<random0_1<<endl;

    return 0;
}