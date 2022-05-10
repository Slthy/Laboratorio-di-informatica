#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int random50_100 = (rand() % 50) + 50;
    float random0_1 = float(rand()) / float(RAND_MAX);

    cout<<"Valore 1: "<<random50_100<< " Valore 2: "<<random0_1<<endl;

    return 0;
}