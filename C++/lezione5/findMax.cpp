#include <iostream>
#include <cstdlib>
using namespace std;


int findMax (int array [], int arraySize, int i, int max){
  if (i == arraySize) return max;
  if (array[i] > max)  return findMax(array, arraySize, i + 1, array[i]);
  return findMax(array, arraySize, i + 1, max);
}

int main (){
  srand(time(NULL));
  int arraySize;
  cout<<"Dimensiore array: ";
  cin>>arraySize;
  int array[arraySize];
  for (int i = 0; i < arraySize; i++) array[i] = rand() % 100;
  for (int i = 0; i < arraySize; i++) cout<<'\t'<<array[i]<<'\t';
  int max = findMax(array, arraySize, 0, array[0]);
  cout<<endl<<max;

  

}