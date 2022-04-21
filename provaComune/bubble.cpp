#include <iostream>
using namespace std;

int main() {//bubble
  int array [5] = {1, 8, 1, 2, 7};
  for (int i = 0; i < 5-1; i++){
    for (int j = 0; j < 5-1-i; j++){
      if (array[j+1]<array[j]){
        int scambio = array[j+1];
        array[j+1] = array[j];
        array[j] = scambio;
      }
    }
  }
  
  for (int i = 0; i < 5; i++) cout<<'\t'<<array[i];
  return 0;
}