#include <iostream>
#include <cstdlib>
using namespace std;

int returnMax (int i, int max, int size, int array[]){
    cout<<"\ni: "<<i<<" max: "<<max<<" size: "<<size;
    if (i == size) return max;
    returnMax(i+1, array[0], size, array);
    return max;
}

int main(){
    srand(time(NULL));
    int size;
    cout<<"Inserire dimensione array: ";
    cin>>size;
    int array [size];
    for (size_t i = 0; i < size; i++) {
        array[i]=rand() % 100;
        cout<< array[i]<<'\t';
    }
    int max = returnMax(1, array[0], size, array);
    cout<<'\t'<<max;
    
    

}