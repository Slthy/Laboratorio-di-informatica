#include <iostream>
using namespace std;

void calcolaMonete(int totale, int &e2, int &e1, int &c50, int &c20, int &c10, int &c5, int &c2, int &c1){
  if ((totale - 200) >= 0) {e2++; calcolaMonete(totale - 200, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 100) >= 0) {e1++; calcolaMonete(totale - 100, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 50) >= 0) {c50++; calcolaMonete(totale - 50, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 20) >= 0) {c20++; calcolaMonete(totale - 20, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 10) >= 0) {c10++; calcolaMonete(totale - 10, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 5) >= 0) {c5++; calcolaMonete(totale - 5, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 2) >= 0) {c2++; calcolaMonete(totale - 2, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 1) >= 0) {c1++; calcolaMonete(totale - 1, e2, e1, c50, c20, c10, c5, c2, c1);}
  return;
}

int main(){
  //float totale;
  int totale, e2 = 0, e1 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;
  cin >> totale;
  //int newTotale = totale*10;
  calcolaMonete(totale, e2, e1, c50, c20, c10, c5, c2, c1);
  cout << e2 << '\t' << e1 << '\t' << c50 << '\t' << c20 << '\t' << c10 << '\t' << c5 << '\t' << c2 << '\t' << c1 << '\t';
}