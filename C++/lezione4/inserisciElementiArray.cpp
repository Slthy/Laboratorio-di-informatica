#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int array [10] = {0};
    int var;
    for (int i = 0; i < 10; i++){
        do{
            cout<<"Inserire il "<<i+1<<"o elemento dell'array (inserire un numero a tre cifre): ";
            cin>>var;
            if(var<100) cout<<"Variabile inferiore a zero"<<endl;
        } while(var<100);
        array[i] = var;
    }
    cout<<"Elementi array: ";
    for (int i = 0; i < 10; i++) cout<<"\n\t-) "<<array[i]<<"\n";
    

}