#include <iostream>
using namespace std;

int main(){
    char vocali [5] = {'a', 'e', 'i', 'o', 'u'};
    cout<<"Vocali dell'alfabeto: ";
    for (int i = 0; i < 5; i++) cout<<"\n\t-) "<<vocali[i]<<"\n";

    return 0;
}