#include <iostream>
using namespace std;

int main() {//select
  int array [5] = {3, 8, 1, 2, 7};
  for (int i = 0; i < 5-1; i++){
    int iMin = i;
    for(int j = i+1; j<5; j++) if (array[j]<array[iMin]) iMin = j;
    int scambio = array[i];
    array[i] = array[iMin];
    array[iMin] = scambio;
  }

  for (int i = 0; i < 5; i++) cout<<'\t'<<array[i];
  return 0;
}