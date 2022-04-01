#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int var = 0;
    do{
        cout<<"Inserire la dimensione dell'array(numero intero non negativo): ";
        cin>>var;
        if(var<=0) cout<<"Variabile inferiore a zero"<<endl;
    } while(var<=0);
    int array [var];

    return 0;
}